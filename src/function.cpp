#include <vector>
#include "functions.h"

std::vector<int> primeFactorize(int number){
    std::vector<int> factors;
    int divisor = 2;
    while(divisor<number){
        while(number%divisor == 0){
           factors.push_back(divisor);
            number = number/divisor;
        }  
        divisor++;
}
    if(number > 1)
        factors.push_back(number);

    return factors;
}