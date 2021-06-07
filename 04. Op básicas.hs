-- @007 somaImpares
somaImpares a = sum (filter(odd) a)

main = do
    a <- readLn :: IO [Int]
    print $ somaImpares a
    
    
-- @001 max3
max3 a b c = max a (max b c)

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    print $ max3 a b c
    
    
-- @012 fatorial
fatorial a = product[1..a]

main = do
    a <- readLn :: IO Int
    print $ fatorial a
    
    
-- @014 elemento
elemento a b =  if a >= 0
                    then b !! a
                    else b !! negativo
    where
        negativo = a + length(b)

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ elemento a b


-- @015 pertence
pertence a b = elem a b

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ pertence a b
    
    
-- @016 total
total a
    | a == [] = 0
    | otherwise = 1 + total(tail a)

main = do
    a <- readLn :: IO [Int]
    print $ total a
    
    
-- @017 maior
maior [x] = x
maior (x:xs) = if x > resto then x else resto
    where resto = maior xs

main = do
    a <- readLn :: IO [Int]
    print $ maior a
    
    
-- @023 corpo
corpo a = fst (splitAt (length a-1) a)

main = do
    a <- readLn :: IO [Int]
    print $ corpo a


-- @028 divide
divide a b = splitAt b a

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO Int
    print $ divide a b
    
    
-- @030 uniao
uniao a b = concat[a, filter(\x -> notElem x a) b]

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO [Int]
    print $ uniao a b
    
    
-- @031 intersec - intercessão entre listas
intersec a b = filter(\x -> elem x b) a

main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO [Int]
    print $ intersec a b
    
    
-- @047 splitints
splitints a = ((filter(\x -> odd x) a), (filter(\x -> even x) a))

main = do
    a <- readLn :: IO [Int]
    print $ splitints a
    
    
-- @009 sublist
sublist a b c = take (corrB-corrA) (drop corrA c)
    where
        corrA = if a < 0 then length c + a else a
        corrB = if b < 0 then length c + b else b

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO [Int]
    print $ sublist a b c
    
    
-- @051 paridade
paridade a = length (filter(\x -> x == True) a)

main = do
    a <- readLn :: IO [Bool]
    print $ paridade a
    
    
-- @054 swap - trocando dois elementos de uma lista
swap a b c = if length a > b && length a > c
                then esq ++ [posC] ++ meio ++ [posB] ++ dir
                else a
    where
        posB = a !! b -- pega b
        posC = a !! c -- pega c
        esq = take b a -- pega tudo antes de b
        meio = take (c-b-1) (drop (b+1) a) -- descarta tudo de b para trás e pega tudo antes de c 
        dir = drop (c+1) a -- descarta tudo de c pra tras


main = do
    a <- readLn :: IO [Int]
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    print $ swap a b c
    
    
-- @063 euler1 - soma dos múltiplos de 3 e 5
euler1 a = sum ([x | x <- [1..a-1], mod x 3 == 0 || mod x 5 == 0])

main = do
    a <- readLn :: IO Int
    print $ euler1 a
