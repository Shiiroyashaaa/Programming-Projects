/**
 * @file Challenge6.c
 * @author Steven
 * @brief Determine amount of pay
 * @version 0.1
 * @date 2022-06-02
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double payRate = 12.00;
    double overtime = payRate * 1.5;

    double hours = 0.0;
    double pay = 0.0;
    double gross = 0.0;
    double paid = 0.0;

    double firstThreeHundred = .15;
    double nextOneFifty = .20;
    double overFourFifty = .25;

    printf("\n");
    printf("How many hours do you work a week? ");
    scanf("%lf", &hours);
    printf("\n");

    if (hours > 40.0){
        //First 40 hour pay
        pay = 40 * payRate;
        
        //For Overtime pay
        hours -= 40;
        pay = pay + (hours * overtime);

        paid = pay;

        printf("Original pay %.2f\n", paid);
        printf("\n"); 

        if(pay < 300){
            gross = 300 * firstThreeHundred;
            paid -= gross;
            printf("New pay: %.2f\n", paid);
            return 0;
        }
        else if(pay <= 450 && pay >= 300){            
            gross = (300 * firstThreeHundred) + (150 * nextOneFifty);
            paid -= gross;
            printf("New pay: %.2f\n", paid);
            return 0;
        }
        else if (pay > 450){            
            pay -= 450;
            gross = (300 * firstThreeHundred) + (150 * nextOneFifty) + (pay * overFourFifty);
            paid -= gross;
            printf("New pay: %.2f\n", paid);
            return 0;
        }
        return 0;
    }

    // Hours <=40
    pay = hours * payRate;
    paid = pay;

    if (pay >= 300){
        printf("Original Pay: %.2f\n", pay);
        printf("\n");

        gross = 300 * firstThreeHundred;
        printf("Lose: %.2f\n", gross);

        paid -= gross;

        pay = pay - 300;

        if (pay > 0){
            gross = pay * nextOneFifty;
            printf("Lose an additional: %.2f\n", gross);

            paid -= gross;

            pay = pay - 150;
            if (pay > 0){
                gross = pay * overFourFifty;
                printf("Lose an additional: %.2f\n", gross);

                paid -= gross;
                printf("New pay: %.2f\n", paid);

                return 0;
            }
            printf("New pay: %.2f\n", paid);
            return 0;
        }
        printf("New pay: %.2f\n", paid);
        return 0;
    }

    return 0;
}