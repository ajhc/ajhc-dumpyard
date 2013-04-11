-- copy from lib/jhc/Numeric.hs
x :: Double
x = (234 ** (-15))
base :: Integer
base = 10

expt :: Int -> Integer
expt n = base^n

f0 :: Integer
e0 :: Int -- OK
(f0, e0) = decodeFloat x

minExp0 :: Int -- OK
(minExp0, _) = floatRange x

p :: Int -- OK
p = floatDigits x

b :: Integer -- OK
b = floatRadix x

minExp :: Int -- OK
minExp = minExp0 - p            -- the real minimum exponent

-- Haskell requires that f be adjusted so denormalized numbers
-- will have an impossibly low exponent.  Adjust for this.
f :: Integer -- OK
e :: Int     -- OK
(f, e) = let n = minExp - e0
         in  if n > 0 then (f0 `div` (b^n), e0+n) else (f0, e0)

mDn :: Integer -- OK
mUp :: Integer -- OK
s :: Integer   -- BAD!
r :: Integer   -- OK
(r, s, mUp, mDn) =
   if e >= 0 then
       let be = b^e in
       if f == b^(p-1) then
           (f*be*b*2, 2*b, be*b, b)
       else
           (f*be*2, 2, be, be)
   else
       if e > minExp && f == b^(p-1) then
           (f*b*2, b^(-e+1)*2, b, 1)
       else
           (f*2, b^(-e)*2, 1, 1)

k :: Int -- ???
k =
    let k0 =
            if b==2 && base==10 then
                -- logBase 10 2 is slightly bigger than 3/10 so
                -- the following will err on the low side.  Ignoring
                -- the fraction will make it err even more.
                -- Haskell promises that p-1 <= logBase b f < p.
                (p - 1 + e0) * 3 `div` 10
            else
                ceiling ((log ((fromInteger (f+1))::Double) +
                         fromIntegral e * log (fromInteger b)) /
                          log (fromInteger base))
        fixup n =
            if n >= 0 then
                if r + mUp <= expt n * s then n else fixup (n+1)
            else
                if expt (-n) * (r + mUp) <= s then n
                                                   else fixup (n+1)
    in  fixup (k0::Int)

gen :: [Integer] -> Integer -> Integer -> Integer -> Integer -> [Integer] -- ???
gen ds rn sN mUpN mDnN =
    let (dn, rn') = (rn * base) `divMod` sN
        mUpN' = mUpN * base
        mDnN' = mDnN * base
    in  case (rn' < mDnN', rn' + mUpN' > sN) of
        (True,  False) -> dn : ds
        (False, True)  -> dn+1 : ds
        (True,  True)  -> if rn' * 2 < sN then dn : ds else dn+1 : ds
        (False, False) -> gen (dn:ds) rn' sN mUpN' mDnN'
rds :: [Integer] -- BAD!
rds =
    if k >= 0 then
        gen [] r (s * expt k) mUp mDn
    else
        let bk = expt (-k) -- BAD!
        in  gen [] (r * bk) s (mUp * bk) (mDn * bk)


floatToDigits ::  ([Int], Int)
floatToDigits = (map fromIntegral (reverse rds), k)

main :: IO ()
main = do
  print ("f0", f0)
  print ("e0", e0)
  print ("minExp0", minExp0)
  print ("p", p)
  print ("b", b)
  print ("minExp", minExp)
  print ("f", f)
  print ("e", e)
  print ("mUp", mUp)
  print ("mDn", mDn)
  print ("s", s)
  print ("r", r)
  print ("k", k)
  let bk = expt (-k)
  print ("bk", bk)
  let rn = r * bk
      mUpN = mUp * bk
      mDnN = mDn * bk
      (dn, rn') = (rn * base) `divMod` s
  print ("rn", rn)
  print ("mUpN", mUpN)
  print ("mDnN", mDnN)
  print ("dn", dn)
  print ("rn'", rn')
  print ("rds", rds)
{--
("f0",8667451045208964)
("e0",-171)
("minExp0",-1021)
("p",53)
("b",2)
("minExp",-1074)
("f",8667451045208964)
("e",-171)
("mUp",1)
("mDn",1)
("s",5986310706507378352962293074805895248510699696029696)  -- BAD! ("s",0)
("r",17334902090417928)
("k",-35)                                                   -- ??? ("k",-34)
("bk",100000000000000000000000000000000000)                 -- BAD! ("bk",4003012203950112768)
("rn",1733490209041792800000000000000000000000000000000000) -- BAD! ("rn",5286151877111578624)
("mUpN",100000000000000000000000000000000000)               -- BAD! ("mUpN",4003012203950112768)
("mDnN",100000000000000000000000000000000000)               -- BAD! ("mDnN",4003012203950112768)
("dn",2)
("rn'",5362280677403171294075413850388209502978600607940608)
("rds",[4,9,7,7,0,1,0,0,6,1,7,5,7,5,9,8,2])
--}
