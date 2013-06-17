import Foreign.StablePtr

main :: IO ()
main = do
  l <- getLine
  p <- newStablePtr $ print l
  d <- deRefStablePtr p
--  d
  return ()
