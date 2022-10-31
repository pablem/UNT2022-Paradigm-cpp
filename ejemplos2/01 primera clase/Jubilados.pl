edad(luis,20).
edad(juan,72).
edad(pedro,40). 
edad(julia,17).
edad(maria,46).	
edad(andres,50).
edad(rocio,67).
edad(joaquin,15).
edad(cecilia,35).
edad(felicia,60).
edad(santiago,45).
edad(veronica,34).
edad(eugenia,70).
edad(carlos,73).

varon(luis).
varon(juan).
varon(pedro).
varon(andres).
varon(joaquin).
varon(santiago).
varon(carlos).

mujer(julia).
mujer(maria).
mujer(rocio).
mujer(cecilia).
mujer(felicia).
mujer(veronica).
mujer(eugenia).

jubilado(X) :- varon(X), edad(X, E), E >= 65.
jubilado(X) :- mujer(X), edad(X, E), E >= 60.





