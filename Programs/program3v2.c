/**
 * @file program1.c
 * @author Steven Vang
 * @brief Program practice 3 version 2
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

double earthAge(double age);
double mercuryAge(double age);
double venusAge(double age);
double jupiterAge(double age);
double saturnAge(double age);

void main(){

    double age;
    double earth;
    double mercury;
    double venus;
    double jupiter;
    double saturn;
    
    printf("Enter your age: ");
    scanf("%lf", &age);

    earth = earthAge(age);
    mercury = mercuryAge(earth);
    venus = venusAge(earth);
    jupiter = jupiterAge(earth);
    saturn = saturnAge(earth);

    printf("I am %.1lf years old on earth but I would be very old on Mercury with %.2lf years.", age, mercury);
    printf("Not so old on Venus with %.2lf years, very young on Jupiter with %.2lf years and really young on Saturn with %.2lf years", venus, jupiter, saturn);

}
double earthAge(double age){
    double result = 365 * age;
    return result;
}
double mercuryAge(double age){
    double result = age / 88;
    return result;
}
double venusAge(double age){
    double result = age / 225;
    return result;
}
double jupiterAge(double age){
    double result = age / 4380;
    return result;
}
double saturnAge(double age){
    double result = age / 10767;
    return result;
}