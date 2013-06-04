{-# LANGUAGE ForeignFunctionInterface #-}
import Foreign.Ptr
import Foreign.Marshal.Alloc

{-- POSIX thread --}
data {-# CTYPE "pthread_t" #-}      CPthreadT
data {-# CTYPE "pthread_attr_t" #-} CPthreadAttrT
data ThreadId = ThreadId CPthreadT

-- int pthread_create(pthread_t *thread, const pthread_attr_t *attr,
--                    void *(*start_routine) (void *), void *arg);
foreign import ccall "-pthread pthread.h pthread_create" c_pthread_create ::
  Ptr CPthreadT -> Ptr CPthreadAttrT -> FunPtr (Ptr () -> IO (Ptr ())) -> Ptr () -> IO Int

-- int pthread_detach(pthread_t thread);
foreign import ccall "-pthread pthread.h pthread_detach" c_pthread_detach :: CPthreadT -> IO Int

-- forkOS :: IO () -> IO Int
forkOS :: FunPtr (Ptr () -> IO (Ptr ())) -> IO Int
forkOS f = do
  c_pthread_create nullPtr nullPtr f nullPtr
  return 0

{-- Test thread routine --}
testThread :: Ptr () -> IO (Ptr ())
testThread p = do
  print "hoge"
  return p

foreign export ccall "testThread" testThread :: Ptr () -> IO (Ptr ())
foreign import ccall "&testThread" p_testThread :: FunPtr (Ptr () -> IO (Ptr ()))

main :: IO ()
main = do
  forkOS p_testThread
  return ()
