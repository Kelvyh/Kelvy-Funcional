-- @004 countNeg
countNeg a = length (filter (< 0) a)

main = do
    a <- readLn :: IO [Int]
    print $ countNeg a
    
    
-- @005 final
final a b = drop a b

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO [Int]
    print $ final a b
    
    
-- @002 iguais - verificar se duas listas são iguais
iguais a b c
    | a == b && a == c = 3
    | a /= b && a /= c && b /= c = 0
    | otherwise = 2

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    print $ iguais a b c
    
    
-- @006 interior - miolo da lista
interior a = reverse((tail (reverse (tail a))))

main = do
    a <- readLn :: IO [Int]
    print $ interior a
    
    
-- @008 gangorra
gangorra a b c d
    | a*b > c*d = -1
    | a*b < c*d = 1
    | otherwise = 0

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    d <- readLn :: IO Int
    print $ gangorra a b c d
    
    
-- @010 min2
min2 a b = min a b

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    print $ min2 a b
    
    
-- @011 min3
min3 a b c
    | a <= b && a <= c = a
    | b <= a && b <= c = b
    | otherwise = c

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    c <- readLn :: IO Int
    print $ min3 a b c
    
    
-- @000 soma2
soma2 a b = a+b

main = do
    a <- readLn :: IO Int
    b <- readLn :: IO Int
    print $ soma2 a b
