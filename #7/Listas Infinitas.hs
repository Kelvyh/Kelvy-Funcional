-- @076 Gere as seguintes funções.
-- gerador1
gerador1 = 0 : concat [[x , -x] | x <- [1..]]

-- gerador2
gerador2 = [ if odd x then x else -x | x <- [1..]]

-- gerador3
gerador3 = [ 2^x | x <- [0..]]

-- gerador4
gerador4 x = takeWhile (>0) $ iterate (`div`2) x

-- gerador5
import Data.List

gerador5 x = unfoldr(\n -> if n == 0 then Nothing else Just (n, n `div` 2)) x

-- digitos
import Data.List

digitos x = reverse $ unfoldr(\n -> if n == 0 then Nothing else Just (mod n 10, div n 10)) x

-- @065 factors - fatores de um número
import Data.List

nTestes x = filter(\y-> y == 2 || odd y) $ take (x-2) [2..]
    where
        raiz = floor $ sqrt(fromIntegral x)

ehPrimo x = if x == 1 || x == 0 then False else [] == filter(\y -> mod x y == 0) [2..raiz]
    where
        raiz = floor $ sqrt(fromIntegral x)

fator x n = (n,contador)
    where
        divisao = takeWhile (>0) $ iterate (\b -> if b `mod` n == 0 then b `div` n else 0) x
        contador = length divisao -1

factors x =  filter(\(a,b) -> b /= 0) [fator x y | y <- primos]
    where
        primos = filter(ehPrimo) $ nTestes x
        
-- Cifra de Vigenere
import Data.Maybe

toint c = fromJust $ lookup c $ zip ['A'..'Z'] [0..25]

tochar n = snd $ head $ filter(\(f,s) -> f == n) $ zip [0..25] ['A'..'Z']

vigenere str key = [ tochar n | n <- [ mod (f+s) 26 | (f,s) <-(map(\(x,y) -> (toint x, toint y)) (zip str ckey))]]
    where
        n = length str
        ckey = take n $ cycle key
