
/**
 * @file ChallengeTwo.c
 * @author Steven
 * @brief Calculates the area and perimeter of a rectangle
 * @version 0.1
 * @date 2022-05-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(){

    //Declaring and initializing variables
    double width = 2.0;
    double height = 4.0;
    double perimeter = 0.0;
    double area= 0.0;

    //Performing calculation
    perimeter = (height + width) * 2.0; 
    area = height * width;

    //Printing values and results
    printf("Rectangle Width: %.2f\n", width);
    printf("Rectangle Height: %.2f\n", height);
    printf("Rectangle Perimeter: %.2f\n", perimeter);
    printf("Rectangle Area: %.2f\n", area);
    return 0;
}