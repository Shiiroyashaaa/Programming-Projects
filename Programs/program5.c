/**
 * @file program1.c
 * @author Steven Vang
 * @brief Program practice 5
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    double accountNumber;
    double dayMins;
    double nightMins;
    double regMins;

    double chargeOne;
    double chargeTwo;
    double total;

    int i = 0;

    const double premiumDay = .10;
    const double premiumNight = .05;
    const double regularMin = .20;

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
            chargeOne = (dayMins - 75) * premiumDay;
        }

        printf("Enter the nighttime minutes used: ");
        scanf("%lf", &nightMins);

        if(nightMins > 100){
            chargeTwo = (nightMins - 100) * premiumNight;
        }
        
        total = 25 + chargeOne + chargeTwo;
        
        printf("\n");
        printf("Account Number: %d\n", accountNumber );
        printf("Service Type: Premium\n" );
        printf("Minutes Service Used (Day): %.0lf\n", dayMins);
        printf("Minutes Service Used (Night): %.0lf\n", nightMins);
        printf("Amount Due: $%.2lf\n", total);
        
        return (0);
    }

    if(strcmp(service, serviceRegular) == 0){
        printf("Enter the number of minutes service used: ");
        scanf("%lf", &regMins);
    
        if(regMins > 50){
            chargeOne = (regMins - 50) * regularMin;
        }

        total = 10 + chargeOne + chargeTwo;

        printf("\n");
        printf("Account Number: %d\n", accountNumber );
        printf("Service Type: Regular\n" );
        printf("Minutes Service Used: %.0lf\n", regMins);
        printf("Amount Due: $%.2lf\n", total);

        return (0);
    }

    printf("Invalid Service Type.");

}