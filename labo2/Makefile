
all: ej1 ej2 ej3 ej5 ej6

ej1: ej1.cpp
	g++ ej1.cpp -o ej1 -g

ej2: ej2.cpp
	g++ ej2.cpp -o ej2 -g

ej3: ej3.cpp
	g++ ej3.cpp -o ej3 -g

ej5: ej5.cpp dca.cpp dca.h
	g++ ej5.cpp dca.cpp dca.h -o ej5 -g

ej6: ej6.cpp triplicaPorValor.cpp triplicaPorValor.h triplicaPorReferencia.h triplicaPorReferencia.cpp
	g++ ej6.cpp triplicaPorReferencia.cpp triplicaPorReferencia.h triplicaPorValor.cpp triplicaPorValor.h -o ej6 -g

limpiar:
	rm -f ej1 ej2 ej3 ej4 ej5 ej6