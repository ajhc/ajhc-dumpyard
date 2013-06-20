{-# LANGUAGE ForeignFunctionInterface #-}
import Data.Word
import Control.Monad
import Foreign.Ptr
import Foreign.Storable

-- Timing
foreign import ccall "c_extern.h getTimingDelay" c_gettimingDelay :: IO (Ptr Word32)

timingDelayDecrement :: IO ()
timingDelayDecrement = do
  p <- c_gettimingDelay
  i <- peek p
  when (i >= 0) $ poke p (i - 1)

foreign export ccall "timingDelayDecrement" timingDelayDecrement :: IO ()

-- Delay
myDelay :: Word32 -> IO ()
myDelay nTime = do
  p <- c_gettimingDelay
  poke p nTime
  let while :: IO ()
      while = do
        p' <- c_gettimingDelay
        i <- peek p'
        if (i > 0) then while else return ()
  while

foreign import ccall "c_extern.h getTime" c_getTime :: IO Word64

main :: IO ()
main = do
  start <- c_getTime
  forever $ do
    let second n = n * 10
    myDelay $ second 3
    t <- c_getTime
    putStrLn . show $ t - start
