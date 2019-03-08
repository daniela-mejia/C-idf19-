// Demo for malloc () enter number of the elements 

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, *ptr, sum = 0 ;

    printf("Enter the number of the elements: ");
    scanf("%d", &n);    ////scanf() is used to read input from the user, which is then stored in a variable n.
  
    ptr = (int*) malloc (n* sizeof(int));
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