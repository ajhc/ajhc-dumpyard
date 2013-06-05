{-# LANGUAGE ForeignFunctionInterface #-}
module Jhc.Conc (forkOS) where
import Foreign.Ptr
import Control.Monad (when)

{-- POSIX thread --}
data {-# CTYPE "-lpthread pthread.h pthread_t" #-}      CPthreadT
data {-# CTYPE "-lpthread pthread.h pthread_attr_t" #-} CPthreadAttrT
data ThreadId = ThreadId CPthreadT

foreign import ccall "-lpthread OSThreads.h forkOS_createThread" forkOScreateThread ::
  FunPtr (Ptr () -> IO (Ptr ())) -> IO Int

-- forkOS :: IO () -> IO Int
forkOS :: FunPtr (Ptr () -> IO (Ptr ())) -> IO Int
forkOS f = do
  err <- forkOScreateThread f
  when (err /= 0) $ fail "Cannot create OS thread."
  return err
