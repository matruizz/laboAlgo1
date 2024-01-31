#include <iostream>

int main(){
    int x = 0, y = 0, res = 0;

    std::cout<<"Ingrese el primer numero"<<std::endl;
    std::cin>>x;
    std::cout<<"Ingrese el segungo numero"<<std::endl;
    std::cin>>y;

    if(x>y){
        res = x+y;
    }else{
        res = x*y;
    }
    std::cout<<"El resultado es: "<<std::endl;
    std::cout<<res<<std::endl;
    return 0;
}