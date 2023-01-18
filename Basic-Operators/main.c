/*
    Author: Matt Johnson
    Subject: basic operators
    Purpose: program displays calculations
    Date: 01/18/2023
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // use for bool data type

int main(void) {

    /*** ARITHMETIC OPERATORS ***/

    // initialize variables
    int a = 33;
    int b = 15;
    int result = 0;

    // calculate variables with addition operator
    result = a + b;
    // display result
    printf("result with add operator: %d\n", result);

    // calculate variables with modulo operator
    result = a % b;
    // display output
    printf("result with mod operator: %d\n", result);

    // calculate variables with unary operator
    result = ++a; // same as a++ in this case
    // display output
    printf("result with ++a operator: %d\n", result);

    // calculate variables with unary operator
    result = a++; // same as ++a in this case
    // display output
    printf("result with a++ operator: %d\n", result);

    /*** LOGICAL OPERATORS ***/

    // initialize and declare variables
    bool c = true;
    bool d = true;
    bool bool_result;

    // calculate variables with && operator
    bool_result = c && d;
    // display output
    printf("\nbool_result is: %d\n", bool_result);

    // calculate variables with || operator
    bool_result = c || d;
    // display output
    printf("bool_result is: %d\n", bool_result);

    return 0;
}
