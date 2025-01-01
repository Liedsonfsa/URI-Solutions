main :: IO ()

main = do
    a' <- getLine
    b' <- getLine

    let a = read a' :: Int
    let b = read b' :: Int
    
    putStr "SOMA = "
    print (a + b)