#include "iostream"

#include "collatz.h"

using namespace std;

void collatz(long int n, int &cantPasos){
    

    if (n != 1){
        if (n % 2 == 0){
            n = n / 2;
        }else{
            n = (n * 3) + 1;
        }

        cout<<n<<endl;
    
        cantPasos++;

        collatz(n, cantPasos);
    }else{
        cantPasos++;
        
        cout<<"La cantidad de pasos es: "<<cantPasos<<endl;
    }
    
}