import Data.Char
import System.Mem

gVar :: Int -> Int
gVar n = 1 + n

main :: IO ()
main = do
  c <- getChar
  let v = gVar . ord $ c
  print v
  performGC
  print v
