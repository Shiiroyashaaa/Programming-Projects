/**
 * @file program1.c
 * @author Steven Vang
 * @brief Program practice 2 version 2
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

double triangleArea(double base, double height);
double trianglePerimeter(double base, double height);

double circleArea(double radius);
double circlePerimeter(double radius);

double squareArea(double base);
double squarePerimeter(double base);

double rectangleArea(double base, double height);
double rectanglePerimeter(double base, double height);

int main(){

    // --- Triangle --- //
    double triangleBase;
    printf("Enter the base of the triangle: ");
    scanf("%lf", &triangleBase);

    double triangleHeight;
    printf("Enter the height of the triangle: ");
    scanf("%lf", &triangleHeight); 
    
    double triArea;
    triArea = triangleArea(triangleBase, triangleHeight);

    double triPerimeter;
    triPerimeter = trianglePerimeter(triangleBase, triangleHeight);

    printf("\n");
    printf("Triangle with base of %.1lf and height of %.1lf \n", triangleBase, triangleHeight);
    printf("Area of the triangle is: %.2lf\n", triArea);
    printf("Perimeter of the triangle is: %.2lf\n", triPerimeter);
    printf("\n");
    // --- Triangle --- //

    // --- Circle --- //
    double radius;
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    double circArea;
    circArea = circleArea(radius);

    double circPerimeter;
    circPerimeter = circlePerimeter(radius);

    printf("\n");
    printf("Circle with a radius of %.1lf\n", radius);
    printf("Area of Circle is: %.2lf\n", circArea);
    printf("Perimeter of Circle is: %.2lf\n", circPerimeter);
    printf("\n");
    // --- Circle --- //

    // --- Square --- //
    double squareBase;
    printf("Enter the base of the square: ");
    scanf("%lf", &squareBase);
    
    double squArea;
    squArea = squareArea(squareBase);

    double squPerimeter;
    squPerimeter = squarePerimeter(squareBase);
    
    printf("\n");
    printf("Square with base of %.1lf\n", squareBase);
    printf("Area of the Square is: %.2lf\n", squArea);
    printf("Perimeter of the Square is: %.2lf\n", squPerimeter);
    printf("\n");
    // --- Square --- //

    // --- Rectangle --- //
    double rectangleBase;
    printf("Enter the base of the rectangle: ");
    scanf("%lf", &rectangleBase);

    double rectangleHeight;
    printf("Enter the height of the rectangle: "); 
    scanf("%lf", &rectangleHeight);
    
    double rectArea;
    rectArea = rectangleArea (rectangleBase, rectangleHeight);

    double rectPerimeter;
    rectPerimeter = rectanglePerimeter(rectangleBase, rectangleHeight);

    printf("\n");
    printf("Rectangle with base of %.1lf and height of %.1lf\n", rectangleBase, rectangleHeight);
    printf("Area of Rectangle is: %.2lf\n", rectArea);
    printf("Perimeter of Rectangle is: %.2lf\n", rectPerimeter);
    printf("\n");
    // --- Rectangle --- //

    return 0;
}
double triangleArea(double base, double height){
    double result = (base * height) / 2;
    return result;
}

double trianglePerimeter(double base, double height){
    double result = (base * 2) + (height * 2);
    return result;
}

double circleArea(double radius){
    double result = PI * pow(radius, 2);
    return result;
}

double circlePerimeter(double radius){
    double result = 2 * PI * radius;
    return result;
}

double squareArea(double base){
    double result = base * 4;
    return result;
}

double squarePerimeter(double base){
    double result = base * 4;
    return result;
}

double rectangleArea(double base, double height){
    double result = base * height;
    return result;
}

double rectanglePerimeter(double base, double height){
    double result = (base * 2) + (height * 2);
    return result;
}