{-# LANGUAGE MagicHash, UnboxedTuples, NoImplicitPrelude #-}
module GHC.Integer.Logarithms
    ( integerLogBase_
    , integerLog2_
    , wordLog2_
    ) where

import GHC.Integer
import qualified GHC.Integer.Logarithms.Internals as I

-- | Calculate the integer logarithm for an arbitrary base.
--   The base must be greater than 1, the second argument, the number
--   whose logarithm is sought, should be positive, otherwise the
--   result is meaningless.
--
-- > base ^ integerLogBase# base m <= m < base ^ (integerLogBase# base m + 1)
--
-- for @base > 1@ and @m > 0@.
integerLogBase_ :: Integer -> Integer -> Int_
integerLogBase_ b m = case step b of
                        (# _, e #) -> e
  where
    step pw =
      if m `ltInteger` pw
        then (# m, 0# #)
        else case step (pw `timesInteger` pw) of
               (# q, e #) ->
                 if q `ltInteger` pw
                   then (# q, 2# * e #)
                   else (# q `quotInteger` pw, 2# * e + 1# #)

-- | Calculate the integer base 2 logarithm of an 'Integer'.
--   The calculation is more efficient than for the general case,
--   on platforms with 32- or 64-bit words much more efficient.
--
--  The argument must be strictly positive, that condition is /not/ checked.
integerLog2_ :: Integer -> Int_
integerLog2_ = I.integerLog2_

-- | This function calculates the integer base 2 logarithm of a 'Word#'.
wordLog2_ :: Word_ -> Int_
wordLog2_ = I.wordLog2_
