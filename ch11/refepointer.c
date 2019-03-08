#include <stdio.h>

#define SIZE 5

int main ()
{
    float *fptr ;
    fptr = &Num1;
    printf("This is the address of value number %p \n", &fptr);
    printf("the value of *fptr is %f\n",*fptr);
    *fptr = &Num2;
    printf("This is the address of value number %p \n", &fptr);
    printf("%f",*fptr);

    return 0;
}
 a) // write the function header for a function called exchange that takes 
    //two pointers to floating-point number x and y as parameters and does not turn a value
  void exchange (float *x, float *y)   //void when a fucntion dont return value
 b) //write the function protype-------is the same as the as above 
 c) //Write the function header for a function called evaluate that returns as integer and that takes as parameters integer x and a pointer to
    //fucntion poly. Function poly takes an integer parameter and return an integer
 int evaluate (int x, int (*poly)(int)) 
 d)//write the function protype-------is the same as the as above 