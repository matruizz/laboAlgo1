#include <iostream>

long int fiborecursivo(int n){

    if(n == 0 || n == 1){
        return n;
    }else{
        return fiborecursivo(n-2) + fiborecursivo(n-1);
    }
}

int main(){
    int n = 0;
    long int res = 0;

    std::cout<<"Ingrese un numero: ";
    std::cin>>n;

    res = fiborecursivo(n);

    std::cout<<"El "<<n<<"-esimo numero de fibonacci es: "<<res;

    return 0;
}