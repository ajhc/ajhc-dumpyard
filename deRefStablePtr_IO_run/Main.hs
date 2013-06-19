import Foreign.StablePtr
import Jhc.Prim.Rts

iToB :: IO () -> IO (StablePtr (IO ()))
iToB io = do
  s <- newStablePtr io
  return s

runB :: StablePtr (IO ()) -> IO ()
runB b = do
  io <- deRefStablePtr b
  io

main :: IO ()
main = do
  l <- getLine
  b <- iToB $ print l
  runB b
