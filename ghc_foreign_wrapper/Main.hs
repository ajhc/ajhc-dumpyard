{-# INCLUDE "foreign.h" #-}
{-# LANGUAGE ForeignFunctionInterface #-}
{-# LANGUAGE EmptyDataDecls #-}
import Foreign.Ptr

data Point = Point Int Int
data CPoint

newPoint :: Point -> IO (Ptr CPoint)
newPoint (Point x y) = c_newPoint x y

main :: IO ()
main = printPoint (Point 16 34)

printPoint :: Point -> IO ()
printPoint pt = do
    cpt <- newPoint pt
    func <- c_PointFunc $ printCPoint
    func' <- c_PointFunc $ \_ -> print "hoge"
    c_applyPoint cpt func
    c_applyPoint cpt func'

printCPoint :: Ptr CPoint -> IO ()
printCPoint pt = do
    x <- c_getPointX pt
    y <- c_getPointY pt
    print $ "Point " ++ show x ++ " " ++ show y

foreign import ccall "wrapper" c_PointFunc :: (Ptr CPoint -> IO ()) -> IO (FunPtr (Ptr CPoint -> IO ()))
foreign import ccall "applyPoint" c_applyPoint :: Ptr CPoint -> FunPtr (Ptr CPoint -> IO ()) -> IO ()

foreign import ccall "newPoint" c_newPoint :: Int -> Int -> IO (Ptr CPoint)
foreign import ccall "getPointX" c_getPointX :: Ptr CPoint -> IO Int
foreign import ccall "getPointY" c_getPointY :: Ptr CPoint -> IO Int
