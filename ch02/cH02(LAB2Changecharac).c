/*Programer: Daniela Mejia
    Date : 29-01-2019
    Project: Lab 2A
    
    Declare and initialize variables of data types:

    int
    float
    double
    char

Type cast and print the following:

    int -> float
    int -> float
    float -> double
    double -> float
    char -> int
    33 -> char

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
  
    
    printf("letter int is %d \n", a);               // int -> float
    printf("letter of int is %d \n", a);           // int -> float                                            
    printf("letter of float is %f \n", b);         //float -> double                                          
    printf("size of double is %lf \n", c);          //double -> float
    printf("letter of char 1 is %c \n", d);         //char -> int    
    printf("size of 33 is %c \n", d);         // 33 -> char   
                                                         
                                                        
    printf("size of int is %f \n", sizeof(a));        
    printf("size of int is %f \n", sizeof(b));
    printf("size of double is %lf \n", sizeof(c));
    printf("size of float is %f \n", sizeof(b));
    printf("size of char is %d \n", sizeof(a));
    printf("size of 33 is %c \n", sizeof(d));

    return 0;
}

