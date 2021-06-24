-- @022 tails - Data.List.tails
tails [] = [[]];
tails xs = xs : tails(tail xs)

main = do
    a <- readLn :: IO [Int]
    print $ tails a


-- @024 unique - Data.List.nub
unique [] = []
unique (x:xs) = x : unique(filter(\y -> y /= x) xs)

main = do
    a <- readLn :: IO [Int]
    print $ unique a
