#include <iostream>

using namespace std;

int main(){

    float promedio = 0;
    int nota = 0, desaprobados = 0, sumaNotas = 0, aprobados = 0;
    int cantAlumnos = 0;

    cout<<"Para terminar el programa debe ingresar la nota -1."<<endl;
    cout<<"Ingrese la primera nota: ";
    cin>> nota;

    while (nota != -1){
        cantAlumnos = cantAlumnos + 1;
        sumaNotas = sumaNotas + nota;
        
        if (nota >= 6){
            aprobados++;
        }else{
            desaprobados++;
        }
        
        cout<<"Ingrese la siguiente nota: ";
        cin>>nota;

    }
    
    if (cantAlumnos < 6){
        cout<<"ERROR! La cantidad minima de alumnos es 6!"<<endl;
    }else{
        if ((cantAlumnos*2) / 3 < aprobados){
            cout<<"Se puede incrementar el numero de plazas de este curso."<<endl;
        }
        promedio = sumaNotas / cantAlumnos;

        cout<<"La suma de las "<<cantAlumnos<<" es "<<sumaNotas<<endl;
        cout<<"El promedio de las notas es "<<promedio<<endl;
    }

    return 0;
}