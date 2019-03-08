/*
Daniela Mejia

With this code you can size of the length of the varaiable .
*/
#include <stdio.h>

int main(void)
{
    //Declaration and Initialization of variables
    int integer = 1;
    float singlePrecision = 2.2;
    double doublePrecision = 3.3;
    char singleChar = '$';
    char singleChar2 = 33;

    // printf the size of the variable using sizeof
    printf("size of int is %d \n", sizeof(integer));       
    printf("size of float is %d \n", sizeof(singlePrecision));
    printf("size of double is %d \n", sizeof(doublePrecision));             // printf("....%varible.. ", sizeof (nameofVariable)
    printf("size of char 1 is %d \n", sizeof(singleChar));
    printf("size of char 2 is %d \n", sizeof(singleChar2));

    //Always return 
    return 0;
}