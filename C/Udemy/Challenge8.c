/**
 * @file Challenge8.c
 * @author Steven
 * @brief Generate Prime Numbers
 * @version 0.1
 * @date 2022-06-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){

    int primeNumbers[25];
    int starting = 2;
    primeNumbers[0] = 2;
    primeNumbers[1] = 3;

    bool isPrime;

    for (int i = 5; i < 100; i+=2){
        isPrime = true;
        
        for (int j = 1; isPrime && i / primeNumbers[j] >= primeNumbers[j]; ++j)
            if(i % primeNumbers[j] == 0){
                isPrime = false;
            }
            if(isPrime == true){
                primeNumbers[starting] = i;
                ++starting;
            }        
    }
    for (int i = 0; i < starting; ++i){
            printf("%i: %i\n", i, primeNumbers[i]);
            }
        
    return 0;
}