/**
 * @file Challenge9.c
 * @author Steven
 * @brief Create a Simple Weather Program
 * @version 0.1
 * @date 2022-06-05
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
#define YEARS 5

int main()
{    
    
    float monthlyAverage[12];
    float weather[YEARS][MONTHS] = {
        {7.3, 7.3, 4.9, 3.0, 2.3, 0.6, 1.2, 0.3, 0.5, 1.7, 3.6, 6.7},
        {6.3, 8.3, 5.9, 4.0, 3.3, 1.6, 2.2, 1.3, 1.5, 2.7, 4.6, 7.7},
        {5.3, 9.3, 6.9, 5.0, 4.3, 2.6, 3.2, 2.3, 2.5, 3.7, 5.6, 8.7},
        {4.3, 10.3, 7.9, 6.0, 5.3, 3.6, 4.2, 3.3, 3.5, 4.7, 6.6, 9.7},
        {3.3, 11.3, 8.9, 7.0, 6.3, 4.6, 5.2, 4.3, 4.5, 5.7, 7.6, 10.7}
        };
    char months[12][10] = {
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec"
    };

    int year, month;
    float subtotal, total; 

    printf("YEAR\tRainfall  (inches)\n");

    for(int year = 0; year < YEARS; year++){        
        for(month = 0; month < MONTHS; month++){
            // every time month increments, the value will be added to subtotal
            subtotal += weather[year][month];
        }
        // this will print the year with the yearly total and the year will increment
        printf("%d\t%.1f\n", 2010 + year, subtotal);
        // total will be equal to all of the yearly total
        total += subtotal;
    }

    printf("\n");
    printf("Yearly average: %.1f inches\n", total/YEARS);
    printf("\n");

    printf("MONTHLY AVERAGE: \n");
    printf("\n");

    //can comment 67 and 74 to keep 73
    //printf("Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep    Oct    Nov    Dec\n");

    for(int month = 0; month < MONTHS; month++){
        for(int year = 0; year < YEARS; year++){
            subtotal += weather[year][month];
        }
        printf("%s:\t%.1f\n", months + month, subtotal/5);
        //printf("%.1f  ", subtotal/5);
    }
    
    return 0;
}