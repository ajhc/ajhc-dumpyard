import Control.Monad
import Control.Concurrent

main :: IO ()
main = do
  l <- getLine
  forkOS $ (forever $ putChar '*')
  forkOS $ (forever $ putStr l)
  forever $ putChar '.'
