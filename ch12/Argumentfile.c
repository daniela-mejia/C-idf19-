//demo reading a file that you call in the executable
// ./a _____  example:  ./a daniela the output will be : The name of the file is daniela.

#include<stdio.h>
#include <stdlib.h>  //using libraries

int main (int argc, char*argv[])  //argc = argument character and the pointer argv read the file 
{
    if (argc <2) // index is up to 2 so is less than it
    {   
        printf("Need to provide the files name.\n"); //if the file isnt given
        return EXIT_FAILURE;
    }
    printf("The name of the file is %s.\n", argv[1]);   //if file given then it is
    return EXIT_SUCCESS;

}
