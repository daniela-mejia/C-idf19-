#include <stdio.h>

/*Array Example*/

int main (void)
{
    // first data   
    int computerScienceCourses [5] = {1003, 1023, 1033, 1063, 1073};

    // second data
    float studentGPAs [7] = {2.7, 3.1, 2.9, 4, 3.9, 2.89, 3.55};

    // third data       
    char cardinalDirections [4] = {0};     // zeroize array

    // fourth data
    char catchPharse [10] = {76, 101, 103, 101, 111};
    
    // Daniela DO NOT FORGET TO DECLARE i
    int i = 0;

//start of array 1
    printf ("\nhate computer Science Courses:\n");
    // for do not have a semicolon afterwards it works as a function 
    for (i = 0; i < 3; i++)
    {
        printf (" You failed the class #%d dumb was class %d. \n", i+1, computerScienceCourses [i]);      // i is in brakets []
    }
//start of array 2

    printf ("\nYour GPA Sucks is:\n");
    for (i = 0; i < 3; i++)
    {
        printf("Lower than 3.5 yours is %f you Failed again. \n", studentGPAs [i]);
    
    }
return 0;

}