-- copy from lib/jhc/Numeric.hs
x :: Double
x = 0.0001
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

mDn :: Integer
mUp :: Integer -- OK
s :: Integer
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

k :: Int -- OK
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
        let bk = expt (-k)
        in  gen [] (r * bk) s (mUp * bk) (mDn * bk)


floatToDigits ::  ([Int], Int)
floatToDigits = (map fromIntegral (reverse rds), k)

main :: IO ()
main = do
  print k           -- => -3
  print $ expt (-k) -- => 1000
  let bk = expt (-k)
  print (r * bk)    -- => 14757395258967642000  -- ajhc return -3689348814741909616
  print s           -- => 147573952589676412928 -- ajhc return 0
  print (mUp * bk)  -- => 1000
  print (mDn * bk)  -- => 1000
  print rds         -- => [1] -- ajhc will crash here
