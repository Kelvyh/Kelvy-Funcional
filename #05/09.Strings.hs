-- @039 upper
toUpper x = if elem x ['a'..'z']
            then snd $ head $ filter (\(f,s) -> f == x) (zip ['a'..'z'] ['A'..'Z'])
            else x

upper xs = map (toUpper) xs

main = do
    a <- getLine
    print $ upper a


-- @040 titulo
toUpper x = if elem x ['a'..'z']
            then snd $ head $ filter (\(f,s) -> f == x) (zip ['a'..'z'] ['A'..'Z'])
            else x

toLower x = if elem x ['A'..'Z']
            then fst $ head $ filter (\(f,s) -> s == x) (zip ['a'..'z'] ['A'..'Z'])
            else x

titulo' [] fn = []
titulo' (x:xs) fn
            | x == ' ' = ' ' : titulo' xs toUpper
            | otherwise = fn x : titulo' xs toLower

titulo xs = titulo' xs toUpper

main = do
    a <- getLine
    print $ titulo a


-- @041 selec - apenas as chaves selecionadas
selec xs ys = map (\y -> xs !! y) ys

main = do
    a <- getLine
    b <- readLn :: IO [Int]
    print $ selec a b


-- @042 isPalind - verificar palíndromo
isPalind xs = xs == reverse(xs)

main = do
    a <- getLine
    print $ isPalind a
