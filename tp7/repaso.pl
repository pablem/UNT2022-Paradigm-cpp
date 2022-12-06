numero(0) :- write(0).
numero(N) :- N1 is N-1, numero(N1), write(N).

vocales([a,e,i,o,u]).

potencia(_,0,1).
potencia(A,N,R) :- N > 0, N1 is N-1, potencia(A,N1,R1), R is A*R1.

pertenece([],X) :- fail, !.
pertenece([X|_],X).
pertenece([_|T],X) :- pertenece(T,X).

cuadrados(0) :- !.
cuadrados(X) :- X > 0, X1 is X - 1, cuadrados(X1), R is X*X, write(R), nl.