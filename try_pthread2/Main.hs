import Control.Monad
import Jhc.Conc

main :: IO ()
main = do
  l <- getLine
  forkOS $ (forever $ putChar '*')
  forkOS $ (forever $ putStr l)
  forever $ putChar '.'
