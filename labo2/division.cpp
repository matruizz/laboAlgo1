

#include <vector>

using namespace std;

vector<int> division(int dividendo, int divisor){
    int cociente = 0, resto = 0;
    
    resto = dividendo % divisor;
    cociente = (dividendo - resto) / divisor;
    
    return {cociente, resto};
}