#include <iostream>

using namespace std;

#include "collatzIter.h"

void collatzIter(long int n, int &cantPasos){

    while(n != 1){
        if (n % 2 == 0){
            n = n / 2;
        }else{
            n = (n * 3) + 1;
        }

        cout<<n<<endl;
    
        cantPasos++;
    }

    cantPasos++;

    cout<<"La cantidad de pasos es: "<<cantPasos<<endl;

}