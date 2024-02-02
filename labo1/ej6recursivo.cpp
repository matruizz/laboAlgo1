#include <iostream>

using namespace std;

int sumaimpares(int n){

    int res = 0;

    if(n == 1){
        res = 0;
    }else if(n%2 == 0){
        res = n-1 + sumaimpares(n-1);
    }else if(n%2 == 1){
        res = n-2 + sumaimpares(n-2);
    }

    return res;
}

int main(){
    int n = 0, res = 0;

    cout<<"Ingrese un numero entero: ";
    cin>>n;

    res = sumaimpares(n);
    cout<<"La suma de todos los impares menores que "<<n<<" es "<<res<<"."<<endl;

    return res;
}