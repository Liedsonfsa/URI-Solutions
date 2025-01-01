import Text.Printf

main :: IO ()

main = do
    a' <- getLine
    b' <- getLine

    let a = read a' :: Float
    let b = read b' :: Float
    let media = (a * 3.5 + b * 7.5) / 11
    
    putStrLn $ printf "MEDIA = %.5f" media