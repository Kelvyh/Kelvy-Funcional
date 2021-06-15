-- @013 fibonacci
fib x
    | x == 0 = 0
    | x == 1 = 1
    | otherwise = fib(x-1) + fib(x-2)

main = do
    a <- readLn :: IO Int
    print $ fib a


-- @018 frequencia
frequencia y [] = 0
frequencia y (x:xs) = if y == x then 1 + frequencia y xs else frequencia y xs

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ frequencia a b


-- @019 unico
frequencia y [] = 0
frequencia y (x:xs) = if y == x then 1 + frequencia y xs else frequencia y xs

unico y xs = if frequencia y xs /= 1 then False else True

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ unico a b


-- @020 maioresQue
maioresQue y [] = []
maioresQue y (x:xs) = if x > y then [x] ++ maioresQue y xs else maioresQue y xs

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ maioresQue a b


-- @021 concatena
concatena [] [] = []
concatena [] (y:ys) = y : concatena [] ys
concatena (x:xs) ys = x : concatena xs ys

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO [Int]
    print $ concatena a b


-- @025 menores
contMin y xs = length (filter (==True) [y > x | x <- xs])

menores 0 xs = []
menores y (x:xs) 
    | length (x:xs) <= y = x : xs
    | otherwise = if contMin x xs < y then x : menores (y-1) xs else menores y xs

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ menores a b


-- @026 alter
alter 1 = [1] ++ [-1]
alter x = alter (x-1) ++ [x] ++ [-x]

main = do
    a <- readLn :: IO Int
    print $ alter a


-- @027 reverso
reverso [] = []
reverso (x:xs) = reverso xs ++ [x]

main = do
    a <- readLn :: IO [Int]
    print $ reverso a


-- @029 intercal - intercalar duas listas
intercal xs [] = xs
intercal [] ys = ys
intercal (x:xs) (y:ys) = x:y:intercal xs ys

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO [Int]
    print $ intercal a b


-- @032 sequencia
sequencia x y = if x <= 0 then [] else [y] ++ sequencia (x-1) (y+1)

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    print $ sequencia a b


-- @037 rotEsq
rotEsq 0 xs = xs
rotEsq y (x:xs) = rotEsq (y-1) (xs ++ [x])

main = do
    a <- readLn :: IO Int
    b <- getLine
    print $ rotEsq a b


-- @038 rotDir
rotDir 0 xs = xs
rotDir y xs = rotDir (y-1) (last xs:init xs)

main = do
    a <- readLn :: IO Int
    b <- getLine
    print $ rotDir a b


-- @048 quadperf
quadperf x = length (filter (==True) [y * y == x  | y <- [1..x-1]]) == 1

main = do
    a <- readLn :: IO Int
    print $ quadperf a


-- @053 deletee - remover primeira ocorrência
deletee y [] = []
deletee y (x:xs)
    | x == y = xs
    | otherwise = x:deletee y xs

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ deletee a b


-- @059 listacc - lista acumulativa
listacc [] = []
listacc xs = listacc (take (length xs-1) xs) ++ [sum xs] 

main = do
    a <- readLn :: IO [Int]
    print $ listacc a


-- @061 line - linhas de um triângulo aritmético
line 0 = []
line x = [inicio..fim]
    where
        inicio = sum[0..x-1]+1
        fim = inicio+x-1

main = do
    a <- readLn :: IO Int
    print $ line a


-- @062 triangle - triângulo aritmético
line 0 = []
line x = [inicio..fim]
    where
        inicio = sum[0..x-1]+1
        fim = inicio+x-1

triangle x = [line y | y <- [1..x]]
    
main = do
    a <- readLn :: IO Int
    print $ triangle a
