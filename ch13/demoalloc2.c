// Example of alloc()

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    unsigned int count ;  //#of elements in the Array (numbers)
    unsigned int i; //counter loop
    int *Array; //pointer for the array

    printf("%s", " This program dynamically allocates an array of integers.\n"
          "Enter the number of elements in the array: ");
    scanf ("%d", &count); //scan thru the elements of the array that are int then use %d
    
    Array = calloc (count, sizeof(int)); // dynamically allocate memory it will start from zero.

    //  initialize elements of array with user-entered data
    for (i=0; i < count; i++)
    {
        printf("%s"," write an integer: \n");  // print and integer
        scanf ("%d", &Array [i]);      //scanf() is used to read input from the user, which is then stored in a variable n.
    } //end for

    puts("\n the elements if the array are: \n");

    for (i=0; i < count; i++)
    {
        printf("%d", Array[i]);  // just print the array
    }//end for
    //reallocate 1/2 of the size of the array 
    realloc (Array, count /2 * sizeof(int));

    puts("\n\n the elements of the array after relocation are: \n");

    //display the array after being cut in half

    for (i =0; i < count; i++)
    {
        printf ("%d", Array[i]);
    }//end for

    puts ("");
    free (Array);
    return 0;

} //end main 