import Text.Printf

main :: IO ()

main = do
    raio' <- getLine

    let pi = 3.14159
    let raio = read raio' :: Double
    let area = (pi * raio * raio)

    putStrLn $ printf "A=%.4f" area