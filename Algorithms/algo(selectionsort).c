// SELECTION SORT The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) 
//from unsorted part and putting it at the beginning. The algorithm maintains two subarrays in a given array.

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int smallest (int array[], int k, int n);
void selection_sort(int array[], int n);

int main ( int argc, char *argv [])  //The name of the variable argc stands for "argument count" contains the number of arguments passed to the program. The name of the variable argv stands for "argument vector".
{
    int i, n, array[10];

    printf(" enter number of elements: ");
    scanf ("%d", &n);

    printf(" enter your elements of the array:  ");

    for ( i=0; i<n ; i++)
    {
        scanf("%d", &array[i]);
    }//end for
    selection_sort(array,n);
    printf(" \n The sorted array is: \n");
    for (i=0; i<n; i++)
        printf("%d\n", array[i]);

}

int smallest (int array[], int k, int n)
{
    int pos = k , small= array[k], i;
    for (i =k+1; i<n; i++)
    {
        if(array[i]<small)
        {
            small = array[i]; 
            pos = i;
        }// end if   
    }//end for
    return pos;
}//end smallest

void selection_sort(int array[], int n)
{
    int k, pos, temp;
    for ( k=0; k<n ; k++)
    {
        pos = smallest(array, k, n);
        temp = array[k];
        array[k] = array[pos];
        array [pos] = temp;
    }// end for
}//end se










