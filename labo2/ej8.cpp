#include "iostream"

#include "collatz.h"

using namespace std;

int main(){
    long int n = 0;
    int cantPasos = 0;

    cout<<"Ingrese un numero para iniciar la serie de Collatz."<<endl;
    cin>>n;
    
    collatz(n, cantPasos);
    
    return 0;
}