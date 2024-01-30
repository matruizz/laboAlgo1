#include <iostream>

int main(){
    
    long int c = 2,anterior = 0, actual = 1, res = 0;
    int n = 0; 

    std::cout<<"Ingrese un numero: ";
    std::cin>>n;
    
    if(n == 0){
        res = 0;
    }else if(n == 1){
        res = 1;
    }else{
        while(c <= n){
            res = anterior + actual;
            anterior = actual;
            actual = res;
            c++;
        }
    }

    std::cout<<"El "<<n<<"-esimo numero de fibonacci es: "<<res<<std::endl;
    return 0;
}