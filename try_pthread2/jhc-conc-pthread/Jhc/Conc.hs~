{-# LANGUAGE ForeignFunctionInterface #-}
module Jhc.Conc (forkOS) where
import Jhc.Addr
import Jhc.Basics
import Jhc.Basics
import Jhc.Class.Ord
import Jhc.IO
import Jhc.Monad
import Jhc.Prim
import Jhc.Prim.Rts
import Jhc.Type.Basic
import Jhc.Type.C
import Jhc.Type.Ptr
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

forkOScreateThreadWrapper :: StablePtr (IO ()) -> IO (Ptr ())
forkOScreateThreadWrapper p = do
  io <- deRefStablePtr p
  io
  freeStablePtr p
  return nullPtr

foreign export ccall "forkOS_createThreadWrapper" forkOScreateThreadWrapper ::
  StablePtr (IO ()) -> IO (Ptr ())

-- int forkOS_createThread(pthread_t *tid, void *entry);
foreign import ccall "-lpthread OSThreads.h forkOS_createThread" c_forkOS_createThread ::
  StablePtr (IO ()) -> IO Int
