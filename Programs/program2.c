/**
 * @file program1.c
 * @author Steven Vang
 * @brief Program practice 2
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main(){

    // --- Triangle --- //
    double triangleBase;
    printf("Enter the base of the triangle: ");
    scanf("%lf", &triangleBase);

    double triangleHeight;
    printf("Enter the height of the triangle: ");
    scanf("%lf", &triangleHeight); 
    
    double triangleArea = (triangleBase * triangleHeight) / 2;
    double trianglePerimeter = triangleBase * 3;
    
    printf("\n");
    printf("Triangle with base of %.1lf and height of %.1lf \n", triangleBase, triangleHeight);
    printf("Area of the triangle is: %.2lf\n", triangleArea);
    printf("Perimeter of the triangle is: %.2lf\n", trianglePerimeter);
    printf("\n");
    // --- Triangle --- //

    // --- Circle --- //
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double circleArea = PI * pow(radius, 2);
    double circlePerimeter = 2 * PI * radius;

    printf("\n");
    printf("Circle with a radius of %.1lf\n", radius);
    printf("Area of Circle is: %.2lf\n", circleArea);
    printf("Perimeter of Circle is: %.2lf\n", circlePerimeter);
    printf("\n");
    // --- Circle --- //

    // --- Square --- //
    double squareBase;
    printf("Enter the base of the square: ");
    scanf("%lf", &squareBase);
    
    double squareArea = squareBase * 4;
    double squarePerimeter = squareBase * 4;
    
    printf("\n");
    printf("Square with base of %.1lf\n", squareBase);
    printf("Area of the Square is: %.2lf\n", squareArea);
    printf("Perimeter of the Square is: %.2lf\n", squarePerimeter);
    printf("\n");
    // --- Square --- //

    // --- Rectangle --- //
    double rectangleBase;
    printf("Enter the base of the rectangle: ");
    scanf("%lf", &rectangleBase);

    double rectangleHeight;
    printf("Enter the height of the rectangle: "); 
    scanf("%lf", &rectangleHeight);
    
    double rectangleArea = rectangleBase * rectangleHeight;
    double rectanglePerimeter = (rectangleBase * 2) + (rectangleHeight * 2);
    
    printf("\n");
    printf("Rectangle with base of %.1lf and height of %.1lf\n", rectangleBase, rectangleHeight);
    printf("Area of Rectangle is: %.2lf\n", rectangleArea);
    printf("Perimeter of Rectangle is: %.2lf\n", rectanglePerimeter);
    printf("\n");
    // --- Rectangle --- //

    return 0;
}
double areaOfTrianlge(triangleBase, triangleHeight){
    return (triangleBase * triangleHeight) / 2;
}