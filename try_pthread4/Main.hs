import Control.Monad
import Control.Concurrent

main :: IO ()
main = do
  l <- putStrLn "Type some string and enter." >> getLine
  forkOS $ (forever $ putChar '*')
  forkOS $ (forever $ putStr l)
  forever $ putChar '.'
