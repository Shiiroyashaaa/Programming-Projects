/**
 * @file program1.c
 * @author Steven Vang
 * @brief Program practice 3
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

void main(){
    const double earth = 365;
    const double mercury = 88;
    const double venus = 225;
    const double jupiter = 4380;
    const double saturn = 10767;

    double age;
    double earthAge;
    double mercuryAge;
    double venusAge;
    double jupiterAge;
    double saturnAge;

    printf("Enter your age: ");
    scanf("%lf", &age);
    
    earthAge = age * earth;

    mercuryAge = earthAge / mercury;

    venusAge = earthAge / venus;

    jupiterAge = earthAge / jupiter;
    
    saturnAge = earthAge / saturn;

    printf("I am %.2lf years old on earth but I would be very old on Mercury with %.2lf years. ", age, mercuryAge); 
    printf("Not so old on Venus with %.2lf years, very young on Jupiter with %.2lf years and really young on Saturn with %.2lf years.", venusAge, jupiterAge, saturnAge);

}