/*
    Author: Matt Johnson
    Subject: demonstration and challenge
    Purpose: program displays the byte size of basic data types
            (output varies depending on the system you are running)
    Date: 01/20/2023

    Instructions:

        1. display the byte size of the following types
            - int
            - char
            - long
            - long long
            - double
            - long double
        2. use the %zd format specifier to format each size
        3. use the sizeof operator
        4. test on more than one computer to see the differences
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    printf("Number of bytes in each data type: \n");
    printf("------------------------------------\n");
    printf("int data type: %15zd\n", sizeof(int));
    printf("char data type: %14zd\n", sizeof(char));
    printf("long data type: %14zd\n", sizeof(long));

    printf("long long data type: %9zd\n", sizeof(long long));
    printf("double data type: %12zd\n", sizeof(double));
    printf("long double data type: %7zd\n", sizeof(long double));

    return 0;
}
