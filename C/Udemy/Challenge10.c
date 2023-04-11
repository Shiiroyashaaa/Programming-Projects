/**
 * @file Challenge10.c
 * @author Steven
 * @brief Working with Functions: Finding Greatest Common Denominator, Calculating absolute Value of a Number, and Compute the Square Root of a Number
 * @version 0.1
 * @date 2022-06-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

int GreatestCommonDenominator(int x, int y);
float AbsoluteValue(float x);
int SquareRoot(int x);

int main(){
    int inputOne = 0;
    int inputTwo = 0;
    float number = 0;
    float absolute = 0;
    int root = 0;
    
    printf("Enter two values: ");
    scanf("%d %d", &inputOne, &inputTwo);
    GreatestCommonDenominator(inputOne, inputTwo);

    printf("\nNow enter a number to check the absolute value of: ");
    scanf("%f", &number);
    absolute = AbsoluteValue(number);
    printf("The absolute value of %.2f is %.2f\n", number, absolute);

    printf("\nNow enter a number to find it's square root ");
    scanf("%d", &root);
    SquareRoot(root);

    return 0;
}

int GreatestCommonDenominator(int x, int y){
    int first = x;
    int second = y;

    if (first == 0 || second == 0){
        printf("Greatest Common Denominator is: 0");
    }

    if (first != 0 && second != 0){
        int RemainderOne = 0;
        int RemainderTwo = 0;
        bool NotFound = true;

        RemainderOne = x % y;

        if (RemainderOne == 0){
            printf("Greatest Common Denominator is: %d\n", second);
        }

        RemainderTwo = y % RemainderOne;
        
        while (NotFound){

            if (RemainderTwo == 0){
                printf("Greatest Common Denominator is: %d\n", RemainderOne);
                NotFound = false;
                return 0;
            }
            RemainderOne = RemainderOne % RemainderTwo;

            if (RemainderOne == 0){
                printf("Greatest Common Denominator is: %d\n", RemainderTwo);
                NotFound = false;
                return 0;
            }
            RemainderTwo = RemainderTwo % RemainderOne;
        }
    }
    return 0;
}

float AbsoluteValue(float x){
    float number = x;
    if(number < 0){
        number *= -1;   
        return number;
    }
    return number;
}

int SquareRoot(int x){
    if(x < 0){
        AbsoluteValue(x);
        return -1;
    }
    double root;
    int c = 0;

    int number, square;
    number = 0;

    while (x > square){
        number++;
        square = number * number;        
    }

    root = (double)number;

    while (c < 100){
        root = ((x/root) + root)/2;
        if(root*root == x){
            printf("Square root of %d is: %.2f\n", x, root);
            return 0;
        }
        c++;
    }

}