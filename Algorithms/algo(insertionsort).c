//INSERTION SORT  is a simple sorting algorithm that builds the final sorted array (or list) one item at a time.

#include <stdio.h>
#include<conio.h>
#define size 5

void insertion_sort (int array[], int n);
int main ()
{
    int i, n, array[size];
     // clrscr() It is a predefined function in "conio.h" (console input output header file) used to clear the console screen
    printf("/n Enter the number of elements in the array: "); // ask for input
    scanf ("%d",&n);
    printf("write the elements in the array: \n");  // ask for the elements try to sort some high and low numbers
    
    for (i=0; i<n ; i++)  // add input in the array 
    {
        scanf("%d", &array[i]);
    }//end for
    insertion_sort(array, n);
     
    printf("\n The array sorted is: \n");
    for (i=0; i<n ; i++)
        printf("%d\t", array[i]);
    getchar(); 
    

    return 0;
}

void insertion_sort ( int array[], int n)
{
    int i, j , temp;
    for ( i = 0 ; i<n ; i++) // i start from zerp and has to be < than n user input and then increment in the loop
    {
         //j will start zero has to be less than (n-i-1) and increment in the loop
        temp = array[i];        // temp becomes the number in the array
        j = i-1; //number in the array goes to the next position
         // then the temporary number will be the one in the next position 
        while (temp< array[j]  && j >=0) 
        {
            array[j+1] = array [j];
            j--;
        }
        array[j+1] = temp;
    }//end for
}