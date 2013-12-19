import Data.Char
import Data.List

swc d@(a,b,c) e = a `seq` b `seq` c `seq` d `seq` wwc d e
wwc (0,0,False) c = wwc (1,0,False) c
wwc (l,w,_) '\n' = (l + 1, w,False)
wwc (l,w,False) c | isSpace c = (l,w,False)
                  | otherwise = (l,w+1,True)
wwc (l,w,_) c | isSpace c = (l,w,False)
              | otherwise = (l,w,True)

main = interact (show . foldl' swc (0,0,False))
