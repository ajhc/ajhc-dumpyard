{-# LANGUAGE ForeignFunctionInterface #-}
import Control.Monad
import Foreign.Ptr
import Jhc.Conc

{-- Test thread routine --}
testThread :: Ptr () -> IO (Ptr ())
testThread p = do
  forever $ putStr "hoge"
  return p

foreign export ccall "testThread" testThread :: Ptr () -> IO (Ptr ())
foreign import ccall "&testThread" p_testThread :: FunPtr (Ptr () -> IO (Ptr ()))

main :: IO ()
main = do
  forkOS p_testThread
  forever $ putChar '.'
