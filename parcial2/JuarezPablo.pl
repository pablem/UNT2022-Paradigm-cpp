% 2do Parcial - PARADIGMAS DE PROGRAMACION 2022

% Base de Conocimiento FARMACIA PARADIGMAS22

medicamento(ibuprofeno).
medicamento(paracetamol).
medicamento(amoxicilina).
medicamento(azitromicina).
medicamento(omeprazol).
medicamento(diclofenaco).

perfumeria(desodorante).
perfumeria(jabonLiquido).
perfumeria(jabonBarra).
perfumeria(loccionAfterShave).
perfumeria(perfumeNacional).
perfumeria(perfumeImportado).

infantes(paniales).
infantes(talcoHipoalergenico).
infantes(oleoCalcareo).
infantes(toallitasHumedas).
infantes(coloniaBebe).

precio(ibuprofeno, 750).
precio(paracetamol, 600).
precio(amoxicilina, 1200).
precio(azitromicina, 1500).
precio(omeprazol, 860).
precio(diclofenaco, 1350).

precio(desodorante, 540).
precio(jabonLiquido, 350).
precio(jabonBarra, 220).
precio(loccionAfterShave, 790).
precio(perfumeNacional, 3400).
precio(perfumeImportado, 26000).

precio(paniales, 5900).
precio(talcoHipoalergenico, 670).
precio(oleoCalcareo, 830).
precio(toallitasHumedas, 480).
precio(coloniaBebe, 710).

% Desarrollo - Pablo Juarez Palmieri

% a) 
productosEnPrecio(Min,Max,X) :- precio(X,Pr), Pr >= Min, Pr =< Max.

% b)
precioContado(X,C) :- \+perfumeria(X), \+infantes(X), precio(X,C).
precioContado(X,C) :- (perfumeria(X); infantes(X)), precio(X,Pr), C is Pr * 85/100.

% c)
monto([],0).
monto([X],R) :- precioContado(X,R).
monto([H|T],R) :- precioContado(H,R1), monto(T,R2), R is R1 + R2.

