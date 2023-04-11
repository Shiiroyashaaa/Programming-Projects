/**
 * @file Challenge4.c
 * @author Steven
 * @brief Converts minutes to years and days
 * @version 0.1
 * @date 2022-05-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes = 0;
    int minutesInYear = 525600; // change to double if using second coversion
    double years;
    double days;

    printf("Enter amount of minutes to convert: ");
    scanf("%i", &minutes);

    
    //Converting to years
    if (minutes >= minutesInYear){
        years = minutes % minutesInYear;

        //if there are remaining minutes
        if (minutes % minutesInYear >= 1){
            years = minutes / minutesInYear;
            printf("%.0f years", years);

            minutes = minutes % minutesInYear;
            days = minutesInYear / 365;

            if (minutes >= days){
                days = minutes / days;
                printf(" and %.0f days", days);
                return 0;
            }
            return 0;
        }
        //if there aren't any remaining minutes
        years = minutes / minutesInYear;
        if(years == 1){
            printf("Number of years: %.1f year", years);    
            return 0;
        }

        printf("Number of years: %.1f years", years);
        return 0;
    }
    
    //minutes aren't large enough for a year
    days = (minutesInYear / 365.0);

    if (minutes >= days){
        days = minutes / days;
        printf("Number of days: %.1f", days);
        return 0;
    }

    printf("%d minutes", minutes);

    return 0;
    /*
    years = minutes / minutesInYear;
    days = (minutes / 60.0) / 24.0;
    //printf("%f", years);
    printf("%d minutes is %f years or %f days", minutes, years, days);
    return;
    */
}