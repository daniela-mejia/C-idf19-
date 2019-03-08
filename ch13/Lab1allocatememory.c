/*
PERFORMANCE LAB 1
Follow instructions below!
The basis of this lab is simple... allocate a section of memory that will
hold a string (your first name). Print the name out, then cleanup the memory and exit.
*/

//TODO: Include needed headers
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(void)
{
    //TODO: Create a string containing your first name
    char first_name [] = {"Daniela"};
    //TODO: Get the size of this string
    char size_str = strlen (first_name);
    //TODO: Declare a char pointer *str
    char *str=NULL ;

    //TODO: Allocate a section of memory of type char
    //TODO: Set the size of this allocated space to 40 bytes
    //TODO: Asign the address of this allocated space to the pointer value
    
    str =  malloc(40* sizeof(char));

    //TODO: Copy your name into the allocated space using strcpy()
    while( str != NULL)
    {
        strcpy (str , first_name);
         //TODO: Print out your name that is stored in the allocated memory space
        printf(" My Name is %s\n", first_name );

        str = (char*) realloc  (str,size_str);
        //TODO: Reallocate the memory space using the size of the string rather than 40 bytes
    
        if( str = NULL)
        {
            printf("Error rellocating memory");
        }
        else
        {
        //TODO: Print out the string again
            printf (" %s\n", size_str);
        }
    }
    free(str);
    str = NULL;
    return 0;
}