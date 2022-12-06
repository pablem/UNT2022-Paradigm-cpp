contar xs k
 | null xs = 0
 | head xs == k = 1 + contar (tail xs) k
 | otherwise = 0 + contar (tail xs) k
 
contar2 [] _ = 0
contar2 (x:xs) k = if x == k then 1 + contar2 xs k else 0 + contar2 xs k

contar3 xs k = sum [1 | x <- xs, x == k]
