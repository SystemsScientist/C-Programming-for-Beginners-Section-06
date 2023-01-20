/*
    Author: Matt Johnson
    Subject: demonstration and challenge
    Purpose: program converts number of minutes to days and years
    Date: 01/20/2023

    Instructions:

        1. program should ask the user to enter the number of minutes
           via the terminal
        2. program should display as output the minutes and then its
           equivalent in years and days
        3. program should create variables to store (of type double)
            - minutes (int)
            - minutes in year
            - years
            - days
        4. need to perform a calculation and use arithmetic operators
            - you have to figure out the conversions
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // initialize variables
    int minutes = 0;
    double years = 0;
    double days = 0;
    double minutes_in_year = 525600;

    // request and input data
    printf("\nEnter the number of minutes: ");
    scanf("%d", &minutes);

    // calculate data
    days = (double)minutes / 1440.00;
    years = (double)minutes / minutes_in_year;

    // display information
    printf("\nNumber of minutes: %d\n", minutes);
    printf("Number of days: %.4lf\n", days);
    printf("Number of years: %.4lf\n", years);

    return 0;
}
