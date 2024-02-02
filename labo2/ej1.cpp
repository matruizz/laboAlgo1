#include <iostream>

using namespace std;

int main(){
    
    int cantEstudientes = 0, nota = 0;
    float sumaNotas = 0, promedioNotas = 0;
    
    cout<<"Ingrese la cantidad de estudiantes: ";
    cin >> cantEstudientes;

    for (size_t i = 0; i < cantEstudientes; i++){
        
        cout<<"Ingrese la nota del estudiante "<<i<<": ";
        cin>> nota;

        sumaNotas = sumaNotas + nota;

    }
    promedioNotas = sumaNotas / cantEstudientes;

    cout<<"La suma de todas las notas es "<< sumaNotas<<"."<<endl;
    cout<<"El promedio de notas para este examen es "<<promedioNotas<<"."<<endl;

    return 0;
}