// Demo for calloc ()


#include <stdio.h>
#include <stdlib.h>

int main 
{
     int n, i, *ptr, sum = 0 ;

    printf("Enter the number of the elements: ");
    scanf("%d", &n);    ////scanf() is used to read input from the user, which is then stored in a variable n.
  
    ptr = (int*) calloc (n* sizeof(int)); //allocates the memory and also initializes the allocates memory block to zero. If we try to access the content of these blocks then we’ll get 0
    if ( ptr == NULL)
    {
        printf( "ERROR! memory was not allocated");
        exit(0);
    }
    printf ("Enter elements : ");
    for (i=0; i < n; ++i)
    {
        scanf("%d", ptr + i);  //scan the ptr plus the increment 
        sum += *(ptr + i);  //sum of the elements
    }
    printf("Sum = %d", sum);
    free (ptr);  // free teh memory 
    return 0;
}