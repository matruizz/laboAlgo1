#include <iostream>

#include "swap.h"

using namespace std;

int main(){
    int a = 0, b = 0;
    
    cout<<"Ingrese un numero: ";
    cin>>a;
    cout<<"Ingrese otro numero: ";
    cin>>b;

    swap(a, b);
    
    cout<<a<<" "<<b<<endl;

    return 0;
}


