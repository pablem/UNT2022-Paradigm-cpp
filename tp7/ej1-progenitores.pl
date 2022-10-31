progenitor(carlos, felipe).
progenitor(carlos, isabelii).

progenitor(william, carlos).
progenitor(william, diana).
progenitor(harry, carlos).
progenitor(harry, diana).

progenitor(george, william).
progenitor(george, catherine).
progenitor(charlotte, william).
progenitor(charlotte, catherine).
progenitor(louis, william).
progenitor(louis, catherine).

progenitor(archie, harry).
progenitor(archie, meghan).
progenitor(lilibet, harry).
progenitor(lilibet, meghan).

femenino(isabelii).
femenino(diana).
femenino(catherine).
femenino(meghan).
femenino(charlotte).
femenino(lilibet).

masculino(felipe).
masculino(carlos).
masculino(william).
masculino(harry).
masculino(george).
masculino(louis).
masculino(archie).

padre(Y, X) :- progenitor(Y, X), masculino(X).
madre(Y, X) :- progenitor(Y, X), femenino(X).

hijo(Y, X) :- progenitor(Y, X), masculino(Y).
hija(Y, X) :- progenitor(Y, X), femenino(Y).

abuelo(X,Y):- progenitor(X,P), progenitor(P,Y), masculino(Y).
abuela(X,Y):- progenitor(X,P), progenitor(P,Y), femenino(Y).

hermanos(X,Y) :- padre(X,P), padre(Y, P). 

primo(X,Y) :- progenitor(X,P1), progenitor(Y,P2), hermanos(P1,P2), masculino(Y).
prima(X,Y) :- progenitor(X,P1), progenitor(Y,P2), hermanos(P1,P2), femenino(Y).

primo(X,Y) :- progenitor(X,P1), hermanos(P1,Y), masculino(Y).
prima(X,Y) :- progenitor(X,P1), hermanos(P1,Y),  femenino(Y).

bisabuele(X,Y) :- progenitor(X,Z), (abuela(Z,Y); abuelo(Z, Y)).


/*
** 1.-b) **
| ?- progenitor(carlos, X). ;
X = felipe ? 
X = isabeliii
------------------------------
| ?- progenitor(X, carlos). ;
X = william ? 
X = harry 
------------------------------
?- progenitor(carlos, X), 
progenitor(X, charlotte).
no
------------------------------
progenitor(X, william), 
progenitor(X, harry).
no
-------------------------------
** 1.-c) **
| ?- progenitor(harry,X). ;
X = carlos ? 
X = diana
-------------------------------
| ?- progenitor(X,william). ;
X = george ? 
X = charlotte ? 
yes
-------------------------------
| ?- progenitor(louis,Z), progenitor(Z,X). ;
X = carlos
Z = william ? 

X = diana
Z = william ? 
*/
