/**
 * @file program1.c
 * @author Steven Vang
 * @brief Program practice 1
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){
    char state[] = "Minnesota";
    char country[] = "United States";
    char lakes[] = "the Land of 10,000 Lakes";
    char temp[] = "Fahrenheit";
    char Moorhead[] = "July 6, 1936";
    char feb[] = "February 2, 1996";

    int population = 5379139;
    int year = 2012;
    int firstHigh = 174;
    int negDegrees = -60;
    int secHigh = 114;
    float rate1 = 5.35;
    float rate2 = 7.05;
    float rate3 = 7.85;
    float rate4 = 9.85;

    printf("\n");
    
    printf("%s is a state in the Midwestern %s. Owing its large number of lakes, the state is informally known as the \"%s\". \nThe %s Census Bureau estimates that the population of %s was %d in %d.\n" , 
    state, country, lakes, country, state, population, year);

    printf("\n%s experiences temperature extremes characteristic of its continental climate, with cold winters and hot summers. \nThe record high and low span is %d degrees %s, from %d at Tower on %s,\nto %d %s at Moorhead on %s.\n",     
    state, firstHigh, temp, negDegrees, feb, secHigh, temp, Moorhead);

    printf("\n%s has a progressive income tax structure; the four brackets of state income tax rates are %0.2f, %0.2f, %0.2f and %0.2f percent.", state, rate1 ,rate2, rate3, rate4);
    return 0;
}