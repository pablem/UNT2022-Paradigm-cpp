-- 2do Parcial - PARADIGMAS DE PROGRAMACION 2022

-- Pablo Juarez Palmieri

-- a)
distintosDeX xs k = and [x /= k | x <- xs]

-- b) 
sublista [] _ _ = []
sublista _ _ 0 = []
sublista (x:xs) p n = if p x then x : sublista xs p (n-1) else sublista xs p (n-1)
--
f a = odd a

-- c) 
insertarLista xs ys n
 | null xs = ys
 | length ys <= (n-1) = ys ++ xs
 | otherwise = (take (n-1) ys) ++ xs ++ (drop (n-1) ys)