#include <iostream>
#include <math.h>
#include <vector>

#include "dca.h"

using namespace std;




int main(){

    float r = 0;

    cout<<"Ingrese el radio de un circulo."<<endl;
    cin>>r;

    const float *radio = &r;
    vector diaCirAre = dca(radio);

    cout<<"El diametro es: "<<diaCirAre[0]<<endl;
    cout<<"La circunferencia es: "<<diaCirAre[1]<<endl;
    cout<<"El area del circulo es: "<<diaCirAre[2]<<endl;

    return 0;
}