edad(luis, 20).
edad(juan, 72).
edad(pedro, 40).
edad(julia, 17).
edad(maria, 46).
edad(andres, 50).
edad(rocio, 67).
edad(joaquin, 15).
edad(cecilia, 35).
edad(felicia, 60).
edad(santiago, 45).
edad(veronica, 34).
edad(eugenia, 70).
edad(carlos, 73).

masculino(luis).
masculino(juan).
masculino(pedro).
masculino(andres).
masculino(joaquin).
masculino(santiago).
masculino(carlos).
femenino(maria).
femenino(julia).
femenino(felicia).
femenino(rocio).
femenino(cecilia).
femenino(eugenia).
femenino(veronica).

/*2.-b*/
menorEdad(X) :- edad(X, E), E < 18.

/*2.-c)*/
jubilacion(X) :- masculino(X), edad(X, E), E >= 65.
jubilacion(X) :- femenino(X), edad(X, E), E >= 60.

/*2.-d)*/
esMayor(X,Y) :- edad(X, E1), edad(Y, E2), E1 > E2.

/*2.-e)*/
coetaneos(X,Y) :- edad(X, E1), edad(Y, E2), ((E1>E2,E1=<10+E2);(E2>E1,E2=<10+E1)).






