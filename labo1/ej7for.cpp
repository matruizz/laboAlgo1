#include <iostream>

using namespace std;

int main(){
    int n = 0, res = 0;

    cout<<"Ingrese un numero: ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            res = res + i;
        }
    }
    cout<<"La suma de los divisores de "<<n<<" es "<<res<<endl;
    return res;
}