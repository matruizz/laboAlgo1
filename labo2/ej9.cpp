#include "iostream"

#include <vector>

#include "division.h"

using namespace std;

int main(){
    int dividendo = 0, divisor = 0;

    cout<<"Ingrese el dividendo: ";
    cin>>dividendo;
    cout<<"Ingrese el divisor: ";
    cin>>divisor;

    vector<int> res = division(dividendo, divisor);

    cout<<"El cociente es "<<res[0]<<" el resto es "<<res[1]<<endl;
    
    return 0;
}