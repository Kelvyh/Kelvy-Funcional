-- @064 produtoEscalar - utilizando a função zip
produtoEscalar xs ys = sum [x * y | (x, y) <- (zip xs ys)]

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO [Int]
    print $ produtoEscalar a b


-- @065 indices - busca posições do elemento
indices y xs = [s | (_, s) <- filter(\k -> fst k == y) (zip xs [0..(length xs)-1])]

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ indices a b
