main :: IO ()

main = do
    a' <- getLine
    b' <- getLine
    c' <- getLine
    d' <- getLine

    let a = read a' :: Int
    let b = read b' :: Int
    let d = read d' :: Int
    let c = read c' :: Int
    let diff = (a * b - c * d)
    
    putStr "DIFERENCA = "
    print diff