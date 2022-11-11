-- Ejercicio 1 ----------------------------
misterio x
 | x <= 0 = 0
 | x == 1 = 1
 | otherwise = 2*x + misterio (x - 1) - 1
 
-- Ejercicio 2 ----------------------------
--a 
divisiónEntera a b
 | b == 0 = -999
 | a == 0 = 0
 | a == b = 1
 | a < b = 0
 | otherwise = 1 + divisiónEntera (a-b) b
 
--bI GUARDS:
contarMayores1 xs k
 | null xs = 0
 | head xs > k = 1 + contarMayores1 (tail xs) k
 | otherwise = 0 + contarMayores1 (tail xs) k

--bII PATERN MATCHING
contarMayores2 [] _ = 0
contarMayores2 (x:xs) k = if x > k then 1 + contarMayores2 xs k else 0 + contarMayores2 xs k

--bIII LIST COMPREHESION
contarMayores3 xs k = sum [1 | x <- xs, x > k]

--c
subLista xs n = take n xs

--d
interseccion xs ys = [x | x <- xs, y <- ys, x==y]

--e FUNCION DE ORDEN SUPERIOR
x2 p = 2*p
transformar _ [] = []
transformar f (x:xs) = f x : transformar f xs 

--f 
tablaDel5 = [5*x | x <- [0..50]]

--g
paresOrdenados = [(a,b) | a <- [0..5], b <- [0..5], a < b, even a, odd b]

--hI con PATERN MATCHING
pre x = odd x
verificar _ [] = True
verificar p (x:xs) = p x && verificar p xs

--hII con GUARDS
verificar1 p xs
 | null xs = True
 | p (head xs) = True && verificar1 p (tail xs)
 | otherwise = False

--hIII con LIST COMPREHESION
verificar2 p xs = and [p x | x <- xs]

--i
func x y = x ++ y
combinarCon :: (a -> b -> c) -> [a] -> [b] -> [c]
combinarCon f xs ys = [f x y | x <- xs, y <- ys]
--implementación: combinarCon func ["a","b","c"] ["x","y","z"]

--j
filtrarLista :: (a -> Bool) -> [a] -> [a]

--jI con GUARDS
filtrarLista p xs
 | null xs = []
 | p (head xs) = [head xs] ++ (filtrarLista p (tail xs)) --sin la notacion ":" no podía concatenar
 | otherwise = filtrarLista p (tail xs)
 
 --jII con LIST COMPREHESION
filtrarLista2 p xs = [x | x <- xs, p x]



