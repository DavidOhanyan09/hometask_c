#include <vector>
#include "functions.h"

bool isPrime(int a){
    for(int i = 2; i<a; i++){
        if(a%i==0){
            return false;
        }
        }
        return true;
    }

std::vector<int> primeFactorize(int number){
    int x = 1;
    std::vector<int> result;
    for(int i = 0; i<number; i++){
        if(number%x == 0){
            if(isPrime(x) == true){
                result.push_back(x);
            }
        }
        x++;
        }
        return result;
    }
     