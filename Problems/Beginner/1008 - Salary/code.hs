import Text.Printf

main :: IO ()

main = do
    number' <- getLine
    hours' <- getLine
    received' <- getLine

    let number = read number' :: Int
    let hours = read hours' :: Float
    let received = read received' :: Float

    let result = hours * received

    putStrLn $ printf "NUMBER = %d" number
    putStrLn $ printf "SALARY = U$ %.2f" result
