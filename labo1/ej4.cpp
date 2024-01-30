#include <iostream>

int main(){

    int n = 0, d = 2;
    bool res = true;

    std::cout<<"Ingrese un numero: "<<std::endl;
    std::cin>>n;

    while(d<n && res == true){
        if(n%d == 0){
            res = false;
        }
        d++;
    }

    if(res == true){
        std::cout<<"El numero es primo."<<std::endl;
    }else{
        std::cout<<"El numero no es primo."<<std::endl;
    }

    return 0;
}