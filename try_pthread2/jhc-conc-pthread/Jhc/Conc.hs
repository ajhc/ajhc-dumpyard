{-# LANGUAGE ForeignFunctionInterface #-}
module Jhc.Conc (forkOS, ThreadId) where
import Foreign.Ptr
import Foreign.Storable
import Foreign.Marshal.Alloc
import Control.Monad (when)

{-- POSIX thread --}
data {-# CTYPE "-lpthread pthread.h pthread_t" #-}      CPthreadT
data {-# CTYPE "-lpthread pthread.h pthread_attr_t" #-} CPthreadAttrT
data ThreadId = ThreadId CPthreadT

foreign import ccall "-lpthread OSThreads.h forkOS_createThread" forkOScreateThread ::
  FunPtr (Ptr () -> IO (Ptr ())) -> Ptr Int -> IO CPthreadT

-- forkOS :: IO () -> IO Int
forkOS :: FunPtr (Ptr () -> IO (Ptr ())) -> IO ThreadId
forkOS f = alloca $ \ip -> do
  pth <- forkOScreateThread f ip
  i <- peek ip
  when (i /= 0) $ fail "Cannot create OS thread."
  return $ ThreadId pth
