#include<iostream>

using namespace std;

int main(){
    int nota = 0, cantNotas = 0;
    float sumaNotas = 0, promedioNotas = 0;
    
    cout<<"Para terminar el programa debe ingresar la nota -1,"<<endl<<"esta nota no se incluira en ninguno de los calculos del programa."<<endl;
    cout<<"Ingrese la primera nota: ";
    cin>> nota;

    while(nota != -1){

        sumaNotas = sumaNotas + nota;
        
        cantNotas++;

        cout<<"Ingrese la siguiente nota: ";
        cin>> nota;
    }

    promedioNotas = sumaNotas / cantNotas;

    cout<<"La suma de las "<<cantNotas<<" notas es: "<<sumaNotas<<"."<<endl;
    cout<<"Y el promedio de las "<<cantNotas<<" notas es: "<<promedioNotas<<"."<<endl;

    return 0;
}