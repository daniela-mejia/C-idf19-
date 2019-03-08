#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    //TODO: Create a string containing your first name
    char firstName[] = {"Onawa"};
    //TODO: Get the size of this string
    int size = strlen(firstName);
    //TODO: Declare a char pointer *str
    char *str_ptr = NULL;


    //TODO: Allocate a section of memory of type char    
    //TODO: Set the size of this allocated space to 40 bytes
    //TODO: Asign the address of this allocated space to the pointer value
    str_ptr = (char*)malloc(40);

    if(str_ptr != NULL)
    {
        //TODO: Copy your name into the allocated space using strcpy()
            strcpy(str_ptr, firstName);
        //TODO: Print out your name that is stored in the allocated memory space
            printf("%s\n", str_ptr);
        //TODO: Reallocate the memory space using the size of the string rather than 40 bytes
        //TODO: Print out the string again
        str_ptr = (char*)realloc(str_ptr, size);

        if(str_ptr != NULL)
        {
            printf("%s\n", str_ptr);
        }
    }
free(str_ptr);
str_ptr = NULL;
return 0;

}