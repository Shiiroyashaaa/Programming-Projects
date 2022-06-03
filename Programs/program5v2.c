/**
 * @file program5v2.c
 * @author Steven
 * @brief Program practice 5 version 2
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

double premiumFirstCharge(double dayMin);
double premiumSecondCharge(double nightMin);
double regularFirstCharge(double regMins);
double printOne(double accountNum, double dayMins, double nightMins, double total);
double printTwo(double accountNum, double regMins, double total);

int main(){
    double accountNumber;
    double dayMins;
    double nightMins;
    double regMins;

    double chargeOne;
    double chargeTwo;
    double total;

    int i = 0;

    char name[1000];
    char service[1000];
    char servicePremium[] = "PREMIUM";
    char serviceRegular[] = "REGULAR";
    char ch;

    printf("Enter the account number: ");
    scanf("%d", &accountNumber);

    printf("\n");

    printf("Enter the service type: regular or premium: ");
    scanf("%s", &service);

    while (service[i]){
        ch = service[i];
        service[i] = toupper(ch);
        i++;
    }

    if(strcmp(service, servicePremium) == 0){
        printf("Enter the daytime minutes used: ");
        scanf("%lf", &dayMins);
    
        printf("\n");

        if(dayMins > 75){
            chargeOne = premiumFirstCharge(dayMins);
        }

        printf("Enter the nighttime minutes used: ");
        scanf("%lf", &nightMins);

        if(nightMins > 100){
            chargeTwo = premiumSecondCharge(nightMins);
        }   

        total = 25 + chargeOne + chargeTwo;
        printOne(accountNumber, dayMins, nightMins, total);

        return (0);
    }

    if(strcmp(service, serviceRegular) == 0){
        printf("Enter the number of minutes service used: ");
        scanf("%lf", &regMins);
    
        if(regMins > 50){
            chargeOne = regularFirstCharge(regMins);
        }
        
        total = 10 + chargeOne + chargeTwo;
        printTwo(accountNumber, regMins, total);

        return (0);
    }
    printf("Invalid Service Type.");
}

double premiumFirstCharge(double dayMin){
    const double premiumDay = .10;
    double chargeOne;
    return chargeOne = (dayMin - 75) * premiumDay;
}
double premiumSecondCharge(double nightMin){
    const double premiumNight = .05;
    double chargeTwo;
    return chargeTwo = (nightMin - 100) * premiumNight;
}
double regularFirstCharge(double regMins){
    const double regularMin = .20;
    double chargeOne;
    return chargeOne = (regMins - 50) * regularMin;
}
double printOne(double accountNum, double dayMins, double nightMins, double total){
    printf("\n");
    printf("Account Number: %d\n", accountNum);
    printf("Service Type: Premium\n" );
    printf("Minutes Service Used (Day): %.0lf\n", dayMins);
    printf("Minutes Service Used (Night): %.0lf\n", nightMins);
    printf("Amount Due: $%.2lf\n", total);
}
double printTwo(double accountNum, double regMins, double total){
    printf("\n");
    printf("Account Number: %d\n", accountNum );
    printf("Service Type: Regular\n" );
    printf("Minutes Service Used: %.0lf\n", regMins);
    printf("Amount Due: $%.2lf\n", total);
}
    
