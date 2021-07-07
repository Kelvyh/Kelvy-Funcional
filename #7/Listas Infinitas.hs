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
