/*
    Author: Matt Johnson
    Subject: bitwise operators
    Purpose: program displays bitwise calculations
    Date: 01/19/2023

*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // initialize variables
    unsigned int a = 60;    // 0011 1100
    unsigned int b = 13;    // 0000 1101
    int result = 0;

    // calculate variables and display result
    result = a & b;         // 0000 1100
    printf("result of a & b is %d\n", result);

    // calculate variables and display result
    result = a | b;         // 0011 1101
    printf("result of a | b is %d\n", result);

    // calculate variable and display result
    result = ~a;
    printf("result of ~a is %d\n", result);

    // calculate variable and display result
    result = ~b;
    printf("result of ~b is %d\n", result);

    // calculate variable and display result
    result = a << 2;
    printf("result of a << 2 is %d\n", result);

    // calculate variable and display result
    result = b << 2;
    printf("result of b << 2 is %d\n", result);

    // calculate variable and display result
    result = a << 4;
    printf("result of a << 4 is %d\n", result);

    // calculate variable and display result
    result = b << 4;
    printf("result of b << 4 is %d\n", result);

    return 0;
}
