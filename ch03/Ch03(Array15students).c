/*
Daniela Mejia

Array PRACTICE

Student ages

Declare and zeroize an int array with a dimension equal to the number of students + 1
Set index 0 with the age* of the instructor
Fill the elements of the array with the ages* of the students starting with index 1
Print the array

*/
#include <stdio.h>

int main (void)
{
    int ages [15]= {29,28,27,26,25,24,23,22,21,20,19,18,17,16,15};     //declare and initialize array 15 are the total students in class
   ages [0]=29;                                                        //age of instructor

    //start the count from 1 because 0 is 29
    int i =1; 

    for (i=1 ; i<15; i++)  // icounter start at  runs less than 15 iterations and i++ keep counting 
    {
        printf( "age of student is #%d\n is %d \n", i+1, ages [i]);         //age of the student is #%d (student) is %d(age)
       
    }
    printf( " travis age is %d \n", ages [0]);     //postion of instructor age on [0]
return 0;
}