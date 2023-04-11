/**
 * @file Challenge5.c
 * @author Steven
 * @brief Print the byte size of the basic data type
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){
    printf("\n");
    printf("Size of char: %u\n", sizeof(char));
    printf("Size of short: %u\n", sizeof(short));
    printf("Size of int: %u\n", sizeof(int));
    printf("Size of long: %u\n", sizeof(long));
    printf("Size of long long: %u\n", sizeof(long long));
    printf("Size of float: %u\n", sizeof(float));
    printf("Size of double: %u\n", sizeof(double));
    printf("Size of long double: %u\n", sizeof(long double));
    
    return 0;
}