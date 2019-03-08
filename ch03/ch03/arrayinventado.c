#include <stdio.h>

int main (void)
{
    int ages [15]= {29,28,27,26,25,24,23,22,21,20,19,18,17,16,15};
   ages [0]=29;

    int i =1; 

    printf ("\nyou are old as hell \n");
    for (i=1 ; i<15; i++)
    {
        printf( "age of student is #%d\n is %d \n", i+1, ages [i]);
       
    }
    printf( " travis age is %d \n", ages [0]);
return 0;
}