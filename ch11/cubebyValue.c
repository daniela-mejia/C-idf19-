/* Pass by Value and Pass by Reference 

This lab presents two versions of a function that cubes an integer—cubeByValue and cubeByReference

First program passes the variable number by value to function cubeByValue. 
The cubeByValue function cubes its argument and passes the new value back to main using a return statement. 
The new value is assigned to number in main. */

//cube a variable using pass-by-value

#include <stdio.h>

int cubeByValue (int n) ; // prototype

int main ()
{
    int number = 5; //initalize number
    printf(" The original value of number is %d", number);

    //pass number by value to cubeByValue
    number = cubeByValue (number);
    printf("\n The new value of number is %d \n", number);
    //end main
}
//calculate and return cube of integer argument
int cubeByValue (int n)
{
    return n*n*n; // cube loal variable n and return result
}//end function cubeByValue