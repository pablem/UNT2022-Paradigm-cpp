
% Comentario de una solo linea

/* Comentario
   de mas de 
   una linea
*/


% Potencia

% a^0 = 1
potencia(A, 0, 1).

% a^n = a * a^(n-1)
potencia(A, N, R) :- N > 0 , N1 is N -1, potencia(A, N1, R1), R is A * R1.


% Pertenece X a una lista
pertenece([], X):- fail, !.
pertenece([X|_], X).
pertenece([_|T], X) :- pertenece(T, X).














