/**
 * @file program1.c
 * @author Steven Vang
 * @brief Program practice 4
 * @version 0.1
 * @date 2022-06-03
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>

int main(){
    char name[1000];
    char spacing[] = "$";
    double assessedValue;
    double taxableAmount;
    const double taxRate = 1.05;
    double propertyTax;
    

    printf("Enter a name: ");
    scanf("%s", &name);

    printf("Enter the Assessed Value: ");
    scanf("%lf", &assessedValue);

    taxableAmount = assessedValue * .92;
    propertyTax = (taxableAmount / 100) * taxRate;

    printf("\n");
    printf("Property Tax Report For: %15s\n", name);
    printf("\n");
    printf("Assessed Value: %21s %.2lf\n", spacing, assessedValue);
    printf("Taxable Amount: %21s %.2lf\n", spacing, taxableAmount);
    printf("Tax Rate for each $100.00: %10s %.2lf\n", spacing, taxRate);
    printf("Propert Tax: %24s %.2lf\n", spacing, propertyTax);

}