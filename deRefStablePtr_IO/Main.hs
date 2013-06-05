import Foreign.StablePtr

main :: IO ()
main = do
  p <- newStablePtr $ print "hoge"
  d <- deRefStablePtr p
  d
  return ()
