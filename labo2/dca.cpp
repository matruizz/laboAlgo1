#include <iostream>
#include <math.h>
#include <vector>

#include "dca.h"

using namespace std;

vector<float> dca(const float *radio){
    float diametro = 0, circunferencia = 0, area = 0;
    float r = *radio;

    diametro = r * 2;
    circunferencia = 2*M_PI*r;
    area = M_PI * r * r;


    return {diametro, circunferencia, area};
}