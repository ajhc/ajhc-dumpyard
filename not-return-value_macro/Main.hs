{-# LANGUAGE ForeignFunctionInterface #-}
module Main where
import System.IO
foreign import capi "foo.h ONE" one :: IO Int
foreign import capi "foo.h NOP" nop :: IO ()

main = do n <- one
          nop -- this line cause compile error
          putStrLn $ show n
