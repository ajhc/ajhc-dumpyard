{-# LANGUAGE CPP, MagicHash, UnboxedTuples, NoImplicitPrelude #-}
{-# OPTIONS_HADDOCK hide #-}

#include "MachDeps.h"

-- (Hopefully) Fast integer logarithms to base 2.
-- integerLog2# and wordLog2# are of general usefulness,
-- the others are only needed for a fast implementation of
-- fromRational.
-- Since they are needed in GHC.Float, we must expose this
-- module, but it should not show up in the docs.

module GHC.Integer.Logarithms.Internals
    ( integerLog2_
    , integerLog2IsPowerOf2_
    , wordLog2_
    , roundingMode_
    ) where

default ()

-- When larger word sizes become common, add support for those,
-- it's not hard, just tedious.
#if (WORD_SIZE_IN_BITS != 32) && (WORD_SIZE_IN_BITS != 64)

-- We don't know whether the word has 30 bits or 128 or even more,
-- so we can't start from the top, although that would be much more
-- efficient.
wordLog2_ :: Word_ -> Int_
wordLog2_ w = go 8# w
  where
    go acc u = case u `uncheckedShiftRL_` 8# of
                0# -> case leadingZeros of
                        BA ba -> acc - indexInt8Array ba (word2Int u)
                v   -> go (acc + 8#) v

#else

-- This one at least can also be done efficiently.
-- wordLog2# 0## = -1#
{-# INLINE wordLog2_ #-}
wordLog2_ :: Word_ -> Int_
wordLog2_ w =
  case leadingZeros of
   BA lz ->
    let zeros u = indexInt8Array_ lz (word2Int_ u) in
#if WORD_SIZE_IN_BITS == 64
    case uncheckedShiftRL_ w 56# of
     a ->
      if a `neWord_` 0#
       then 64# - zeros a
       else
        case uncheckedShiftRL_ w 48# of
         b ->
          if b `neWord_` 0#
           then 56# - zeros b
           else
            case uncheckedShiftRL_ w 40# of
             c ->
              if c `neWord_` 0#
               then 48# - zeros c
               else
                case uncheckedShiftRL_ w 32# of
                 d ->
                  if d `neWord_` 0#
                   then 40# - zeros d
                   else
#endif
                    case uncheckedShiftRL_ w 24# of
                     e ->
                      if e `neWord_` 0#
                       then 32# - zeros e
                       else
                        case uncheckedShiftRL_ w 16# of
                         f ->
                          if f `neWord_` 0#
                           then 24# - zeros f
                           else
                            case uncheckedShiftRL_ w 8# of
                             g ->
                              if g `neWord_` 0#
                               then 16# - zeros g
                               else  8# - zeros w

#endif

-- Assumption: Integer is strictly positive,
-- otherwise return -1# arbitrarily
-- Going up in word-sized steps should not be too bad.
integerLog2_ :: Integer -> Int_
integerLog2_ (Positive digits) = step 0# digits
  where
    step acc (Some dig None) = acc + wordLog2_ dig
    step acc (Some _ digs)   =
        step (acc + WORD_SIZE_IN_BITS#) digs
    step acc None = acc     -- should be impossible, throw error?
integerLog2_ _ = negateInt_ 1#

-- Again, integer should be strictly positive
integerLog2IsPowerOf2_ :: Integer -> (# Int_, Int_ #)
integerLog2IsPowerOf2_ (Positive digits) = couldBe 0# digits
  where
    couldBe acc (Some dig None) =
        (# acc + wordLog2_ dig, word2Int_ (and_ dig (minusWord_ dig 1#)) #)
    couldBe acc (Some dig digs) =
        if eqWord_ dig 0#
           then couldBe (acc + WORD_SIZE_IN_BITS#) digs
           else noPower (acc + WORD_SIZE_IN_BITS#) digs
    couldBe acc None = (# acc, 1# #) -- should be impossible, error?
    noPower acc (Some dig None) =
        (# acc + wordLog2_ dig, 1# #)
    noPower acc (Some _ digs)   =
        noPower (acc + WORD_SIZE_IN_BITS#) digs
    noPower acc None = (# acc, 1# #) -- should be impossible, error?
integerLog2IsPowerOf2_ _ = (# negateInt_ 1#, 1# #)

-- Assumption: Integer and Int# are strictly positive, Int# is less
-- than logBase 2 of Integer, otherwise havoc ensues.
-- Used only for the numerator in fromRational when the denominator
-- is a power of 2.
-- The Int# argument is log2 n minus the number of bits in the mantissa
-- of the target type, i.e. the index of the first non-integral bit in
-- the quotient.
--
-- 0# means round down (towards zero)
-- 1# means we have a half-integer, round to even
-- 2# means round up (away from zero)
-- This function should probably be improved.
roundingMode_ :: Integer -> Int_ -> Int_
roundingMode_ m h =
    case smallInteger 1# `shiftLInteger` h of
      c -> case m `andInteger`
                ((c `plusInteger` c) `minusInteger` smallInteger 1#) of
             r ->
               if c `ltInteger` r
                 then 2#
                 else if c `gtInteger` r
                        then 0#
                        else 1#

-- Lookup table
data BA = BA ByteArray_

leadingZeros :: BA
leadingZeros =
    let mkArr s =
          case newByteArray_ 256# s of
            (# s1, mba #) ->
              case writeInt8Array_ mba 0# 9# s1 of
                s2 ->
                  let fillA lim val idx st =
                        if idx == 256#
                          then st
                          else if idx < lim
                                then case writeInt8Array_ mba idx val st of
                                        nx -> fillA lim val (idx + 1#) nx
                                else fillA (2# * lim) (val - 1#) idx st
                  in case fillA 2# 8# 1# s2 of
                      s3 -> case unsafeFreezeByteArray_ mba s3 of
                              (# _, ba #) -> ba
    in case mkArr realWorld_ of
        b -> BA b
