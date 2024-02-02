#include <iostream>

using namespace std;

int main(){
    int n = 0, d = 1, res = 0;

    cout<<"Ingrese un numero: ";
    cin>>n;

    while(d <= n){
        if(n%d == 0){
            res = res + d;
        }

        d++;
    }

    cout<<"La suma de los divisores de n es "<<res<<endl;

    return res;
}