import Text.Printf
import Text.Read (Lexeme(String))

main :: IO ()

main = do
    name' <- getLine
    salary' <- getLine
    sales_total' <- getLine

    let name = read name' :: String
    let salary = read salary' :: Float
    let sales_total = read sales_total' :: Float

    let total_salary = salary + (sales_total * 0.15)

    putStrLn $ printf "TOTAL = R$ %.2f" total_salary
