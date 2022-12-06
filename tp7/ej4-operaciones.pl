/* TP 7, ej4 */

% a.i) Suma nros naturales
sumaDigitos(N,N) :- N < 10.
sumaDigitos(N,R) :- N > 9, D is N mod 10, N1 is N div 10, sumaDigitos(N1,R1), R is D + R1.

% a.ii) Los primeros n nros al cuadrado

cuadrados(N) :- N < 1, !.
cuadrados(N) :- N0 is N-1, cuadrados(N0), R is N*N, write(R), nl.

% b.i) Crear una lista con N elementos (inicializados con Ini)

crearLista([_],N,_) :- N < 0, !.
crearLista([],0,_).
crearLista([Ini|T],N,Ini) :- N0 is N -1, crearLista(T,N0,Ini).

% b.ii) Determinar si están ordenados de menor a mayor

esOrdenada([]).
esOrdenada([_]).
% esOrdenada([X,Y]) :- X < Y.
esOrdenada([X,Y|T]) :- X < Y, esOrdenada([Y|T]).

% b.iii) Eliminar todos los elementos que no están en un intervalo

% conservarIntervalo([ENTRADA],[INTERVALO],[X]).

intersecc([],_,_,[]).

% intersecc([X],X1,X2,[X]) :- X >= X1, X =< X2.
% intersecc([X],X1,X2,[]) :- X < X1; X > X2.

% intersecc([X],X,_,[X]).
% intersecc([X],_,X,[X]).

intersecc([H|T1],X1,X2,[H|T2]) :- H >= X1, H =< X2, intersecc(T1,X1,X2,T2). 
intersecc([H|T],X1,X2,R) :- (H < X1; H > X2), intersecc(T,X1,X2,R). 


