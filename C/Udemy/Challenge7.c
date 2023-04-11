/**
 * @file Challenge7.c
 * @author Steven
 * @brief Guess the Number
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    time_t t;
    srand((unsigned) time (&t));
    int randomNumber = rand() % 21;

    int guess = 0;
    int i = 5;

    printf("This is a guessing game.\nI have chosen a number between 0 and 20 which you must guess.\n");
    printf("\n");

    while (guess != randomNumber && i != 0){
        // how I want to print the number of tries
        
        if(i != 1){
            printf("You have %i tries left.\n", i); 
        }
        if(i == 1){
            printf("You have %i try left.\n", i);
        } 
        
        // ternary operator
        //printf("You have %i tr%s left.\n", i, i == 1 ? "y" : "ies");

        printf("Enter a guess: ");
        scanf("%i", &guess);

        if(guess > 20 || guess < 0){
            printf("You have to guess a number from 0 - 20.\n");
            printf("\n");
        }
        else if(guess < randomNumber){
            printf("Sorry, %i is wrong. My number is greater than that.\n", guess);
            printf("\n");
            i--;
        }
        else if(guess > randomNumber){
            printf("Sorry, %i is wrong. My number is less that that.\n", guess);
            printf("\n");
            i--;
        }
        else if (guess == randomNumber){
            printf("Congratulations. You guessed it!\n");
            return 0;
        }
        /*
        if(i == 0){
            break;
        }
        */
    }
    printf("You lose. The number is: %i", randomNumber);
    return 0;
}