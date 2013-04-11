-- copy from lib/jhc/Numeric.hs
x :: Double
x = 0.0001
base :: Integer
base = 10

expt :: Int -> Integer
expt n = base^n

f0 :: Integer
e0 :: Int
(f0, e0) = decodeFloat x

minExp0 :: Int
(minExp0, _) = floatRange x

p :: Int
p = floatDigits x

b :: Integer
b = floatRadix x

minExp :: Int
minExp = minExp0 - p            -- the real minimum exponent

-- Haskell requires that f be adjusted so denormalized numbers
-- will have an impossibly low exponent.  Adjust for this.
f :: Integer
e :: Int
(f, e) = let n = minExp - e0
         in  if n > 0 then (f0 `div` (b^n), e0+n) else (f0, e0)

mDn :: Integer
mUp :: Integer
s :: Integer
r :: Integer
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
k :: Int
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

gen :: [Integer] -> Integer -> Integer -> Integer -> Integer -> [Integer]
gen ds rn sN mUpN mDnN =
    let (dn, rn') = (rn * base) `divMod` sN
        mUpN' = mUpN * base
        mDnN' = mDnN * base
    in  case (rn' < mDnN', rn' + mUpN' > sN) of
        (True,  False) -> dn : ds
        (False, True)  -> dn+1 : ds
        (True,  True)  -> if rn' * 2 < sN then dn : ds else dn+1 : ds
        (False, False) -> gen (dn:ds) rn' sN mUpN' mDnN'
rds :: [Integer]
rds =
    if k >= 0 then
        gen [] r (s * expt k) mUp mDn
    else
        let bk = expt (-k)
        in  gen [] (r * bk) s (mUp * bk) (mDn * bk)


floatToDigits ::  ([Int], Int)
floatToDigits = (map fromIntegral (reverse rds), k)

main :: IO ()
main = do
  print k             -- => -3
  print $ reverse rds -- => [1] will crash on ajhc
  print floatToDigits -- => ([1],-3)
