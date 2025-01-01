lerA :: IO(Int)
lerA = do readLn
lerB :: IO(Int)
lerB = do readLn

main :: IO ()

main = do
    x <- lerA
    y <- lerB

    putStr "X = "
    print (x + y)