#include <stdio.h>
#include <math.h>

//This program make a number a exponential number 
int main(void)
{
    int base, exp, i; 
    long powResult = 1;
    
    printf("Ex. 2^3, 9^0:\t");
    scanf("%d^%d", &base, &exp);
    powResult = pow(base, exp); // returns x raised to the power of y i.e. xy.

    printf("Ans: %ld", powResult);

    return 0;
}
