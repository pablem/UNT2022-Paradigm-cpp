empleado(juan).
empleado(luis).
secretaria(rosa).
jefe(pedro).
jefe(julio).
supervisor(X,Y) :- jefe(X),empleado(Y).
supervisor(X,Y) :- jefe(X),secretaria(Y).