/*Programer: Daniela Mejia
    Date : 29-01-2019
    Project: Lab 2A
    
    In this lab, you will declare and initialize variables of the following types:

    int
    float
    double
    char

    Then print the variables and their sizes.
    
    */
#include<stdio.h>

int main (void)
// Declaration variables//
{
  //declaration and initialization of variables//
    int a= 1;
    float b= 1.1;
    double c = 3.1456;
    char  d = 'f';
    char e = 33
    

    printf("letter int is %d \n", a);        //print
    printf("letter of float is %f \n", b);
    printf("letter of double is %lf \n", c);
    printf("letter of char 1 is %c \n", d);
    printf("letter of char 1 is %c \n", d);
  
    printf("size of int is %f \n", sizeof(a));
    printf("size of int is %c \n", sizeof(a));     //sizeof all the variables 
    printf("size of float is %fl \n", sizeof(b));
    printf("size of double is %f \n", sizeof(c));
    printf("size of char 33 is %c \n", sizeof(e));
   
    return 0;
}

