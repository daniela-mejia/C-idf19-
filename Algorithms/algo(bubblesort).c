//BUBBLESORT is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements if they are in wrong orde

#include <stdio.h>
#include<conio.h>

int main ()
{
    int i, n, temp, j, array[10];
     // clrscr() It is a predefined function in "conio.h" (console input output header file) used to clear the console screen
    printf("/n Enter the number of elements in the array: "); // ask for input
    scanf ("%d",&n);
    printf("write the elements in the array: ");  // ask for the elements try to sort some high and low numbers
    
    for (i=0; i<n ; i++)  // add input in the array 
    {
        scanf("%d", &array[i]);
    }//end for

    for ( i = 0 ; i<n ; i++) // i start from zerp and has to be < than n user input and then increment in the loop
    {
        for (j=0; j < n-i-1; j++)  //j will start zero has to be less than (n-i-1) and increment in the loop
        {
            if ( array[j] > array[j+1])  //if the number in the array is less than the next number then...
            {
                temp = array[j];        // temp becomes the number in the array
                array[j] = array [j+1]; //number in the array goes to the next position
                array [j+1] = temp;   // then the temporary number will be the one in the next position 
            }//end if
        }// end for
    }//end for
    printf("\n The array sorted in the ascending order is: \n");
    for (i=0; i<n ; i++)
        printf("%d\t", array[i]);
    getchar(); 
    

    return 0;
}