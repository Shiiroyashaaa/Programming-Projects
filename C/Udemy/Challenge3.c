/**
 * @file ChallengeThree.c
 * @author Steven
 * @brief Practice using enum
 * @version 0.1
 * @date 2022-05-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(){

    enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum company companyOne = XEROX, comapanyTwo = GOOGLE, companyThree = EBAY;

    printf("Value of companyOne: %d\n", companyOne);
    printf("Value of companyTwo: %d\n", comapanyTwo);
    printf("Value of companyThree: %d\n", companyThree);
    return 0;
}