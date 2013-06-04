{-# LANGUAGE ForeignFunctionInterface #-}
module Jhc.Conc (forkOS) where
import Jhc.Prim
import Jhc.Basics
import Jhc.Addr
import Jhc.Class.Ord
import Jhc.Monad
import Jhc.Type.C
import Jhc.Type.Ptr
import Jhc.Type.Basic
import Foreign.StablePtr
import Control.Monad (when)

unsafeCoerce :: a -> b
unsafeCoerce = unsafeCoerce__

data {-# CTYPE "pthread_t" #-}      CPthreadT
data ThreadId = ThreadId CPthreadT

forkOS :: IO () -> IO Int
forkOS f = do
  entry <- newStablePtr f
  err <- c_forkOS_createThread entry
  when (err /= 0) $ fail "Cannot create OS thread."
  return err

-- int forkOS_createThread(pthread_t *tid, void *entry);
foreign import ccall "OSThreads.h forkOS_createThread" c_forkOS_createThread ::
  StablePtr (IO ()) -> IO Int
