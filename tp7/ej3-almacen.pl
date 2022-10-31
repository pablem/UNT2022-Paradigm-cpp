% 2do Parcial - PARADIGMAS DE PROGRAMACION 2020

% Base de Conocimiento ALMACEN DON MANOLO

producto(lacteo, leche).
producto(lacteo, manteca).
producto(lacteo, crema).
producto(lacteo, yogurt).
producto(fiambre, queso).
producto(fiambre, jamonCrudo).
producto(fiambre, jamonCocido).
producto(fiambre, salame).
producto(panaderia, pan).
producto(panaderia, factura).
producto(panaderia, tortilla).
producto(panaderia, galleta).
producto(bebida, agua).
producto(bebida, gaseosa).
producto(bebida, jugo).
producto(bebida, soda).
producto(golosina, chocolate).
producto(golosina, caramelo).
producto(golosina, mantecol).
producto(golosina, bombones).
producto(golosina, nugaton).

precio(leche, 77).
precio(manteca, 62).
precio(crema, 95).
precio(yogurt, 53).
precio(queso, 80).
precio(jamonCrudo, 170).
precio(jamonCocido, 100).
precio(salame, 85).
precio(pan, 80).
precio(factura, 20).
precio(tortilla, 10).
precio(galleta, 75).
precio(agua, 86).
precio(gaseosa, 130).
precio(jugo, 98).
precio(soda, 100).
precio(chocolate, 116).
precio(caramelo, 35).
precio(mantecol, 87).
precio(bombones, 140).
precio(nugaton, 51).

% a) Precio mayor que
precioMayor(X,P) :- precio(X,P0), P0 > P.

% b) Promo semanal
sonIguales(X,Y) :- producto(Cat,X), producto(Cat,Y).

hayPrecio100(X,Y) :- precio(X,P1), precio(Y,P2), (P1 >= 100; P2 >= 100).

descuento(X,Y,R) :- precio(X,P1), precio(Y,P2), P1 < P2, R is P1*70/100+P2.
descuento(X,Y,R) :- precio(X,P1), precio(Y,P2), P2 < P1, R is P2*70/100+P1.

promo(X,Y,R) :- hayPrecio100(X,Y), \+ sonIguales(X,Y), descuento(X,Y,R).

