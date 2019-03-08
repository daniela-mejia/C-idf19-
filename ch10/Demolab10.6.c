/*  Daniela Mejia
    02/19/2019
    DEMO LAB 10.6

    Write a simple C program that utilizes a header file
    Write a definition file for the header file
    Utilize the following preprocessor directives:
        #include
        #define
        (#) Operator
        (##)
        #undef
*/

#define _CRT_SECURE_NO_WARNINGS 1       //required to utilize scanf()
#include <stdio.h>                      //defines printf() and scanf()
#include "header1.h"  
#include "header1.c"                 //your header


#define Num1 (5)
#define Num2 (8)

int main(void)
{  

    if (smaller (Num1, Num2))         //if is_larger() returns 1...
    {
        printf("%d was bigger\n", Num1);    //...then Num1 was larger...
    }
    else    //...otherwise it returned 0 so...
    {
        printf("%d was smaller\n", Num2);   //...Num2 was larger
    }

    return 0;
}

