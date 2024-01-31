#include <iostream>

using namespace std;


int combinatorio(int n, int k){
    int res = 0;
    
    if(k == 0){
        res = 1;
    }else{
        res = combinatorio(n-1, k) + combinatorio(n-1, k-1);
    }

    return res;    
}

int main(){
    int n = 0, k = 0, res = 0;

    cout<<"Ingrese un numero: ";
    cin>>n;
    cout<<"Ingrese otro numero: ";
    cin>>k;

    if(n<k){
        res = 0;
    }else{
        res = combinatorio(n,k);
    }

    cout<<"El combinatorio "<<n<<" "<<k<<" es "<<res<<endl;
    return res;
}