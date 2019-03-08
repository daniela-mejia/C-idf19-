//Daniela Mejia
//02-06-2019
//LAB 5A

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>    // Math header contains sqrt()


int main (void)
{   /* insert initialize variables here */
    
    int x, y = 0;  // x leg 1
    double z =0;  //hypotenuse is z value 
    
    /* insert input values and assign to variables here */

    printf("write two intergers for your leg1( SEPARATE with a ,) leg2 for your triangle: \n");
    scanf("%d,%d", &x, &y);

    /*insert logical combo of relational expressions here */
    for(x;y;z)   // loop    
    {   
        x!= 0;
        y> 0;
        z = ((x*x)+(y*y));
          
    }
    printf(" The hypothenuse of a right triangle side is %lf \n", z);
    
    return 0;
}
