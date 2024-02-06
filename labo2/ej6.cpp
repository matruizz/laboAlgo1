#include <iostream>

#include "triplicaPorValor.h"
#include "triplicaPorReferencia.h"

using namespace std;

int main(){
    int cuenta = 0;

    cout<<"Ingrese un valor a triplicar: ";
    cin>>cuenta;
    cout<<"El valor de la variable cuenta es: "<<cuenta<<endl;

    int porCopia = triplicaPorValor(cuenta);
    cout<<"El valor de la variable cuenta es: "<<cuenta<<endl;

    triplicaPorReferencia(&cuenta);
    int porREferencia = cuenta;
    cout<<"El valor de la variable cuenta es: "<<cuenta<<endl;

    cout<<"El resultado de triplicar por valor(copia) es: "<<porCopia<<endl;
    cout<<"El resultado de triplicar por referencia es: "<<porREferencia<<endl;

    return 0;
}