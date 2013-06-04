import Jhc.Conc

main :: IO ()
main = do
  forkOS $ print "hoge"
  forkOS $ print "nyoro"
  return ()
