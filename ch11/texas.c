/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////// PERFORMANCE LAB (I.5.A) 8 /////////////////////////////////////////////
///////////////////////////////////////////////// FUNCTION POINTERS /////////////////////////////////////////////////
/////////////////////////////////////////// "Every integer is bigger in Texas" //////////////////////////////////////
///////////////////////////////////////////////// Instructor Solution ///////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Define each of the following function prototypes IAW their associated comment blocks:
//     int low_to_high_compare(int x, int y)
//     int high_to_low_compare(int x, int y)
//     int absolute_low_to_high_compare(int x, int y)
//     int absolute_high_to_low_compare(int x, int y)
// Write eight (8) tests for bubble_sort() (see: the comment block below), two tests for each of the function
//     prototypes listed above. 
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef TRUE
#define TRUE ((int)1)
#endif

#ifndef FALSE
#define FALSE ((int)0)
#endif

/*
 * FUNCTION:   low_to_high_compare(int x, int y)
 *
 * ARGUMENTS:  Two sequential integers to compare
 *             For the sake of ordering, x should come before y
 *
 * RETURNS:	   If x is greater than or equal to y, return 1
 *             On error, return -1
 *             Return 0 for all other conditions
 *
 * NOTES:      This function compares the values of x and y
 *             If x is greater than or equal y, y needs to be "bubbled up" to the top
 *             Large numbers are ordered first
 *
 * EXAMPLES:   x = 9, y = 0, return 1
 *             x = 8, y = 68, return 0
 *             x = -24, y = 318, return 0
 *             x = -318, y = -688, return 1
 */


int low_to_high_compare(int x, int y);				// Choice 1

/*
 * FUNCTION:   int high_to_low_compare(int x, int y)
 *
 * ARGUMENTS:  Two sequential integers to compare
 *             For the sake of ordering, x should come before y
 *
 * RETURNS:	   If x is less than or equal to y, return 1
 *             On error, return -1
 *             Return 0 for all other conditions
 *
 * NOTES:      This function compares the values of x and y
 *             If x is less than or equal y, y needs to be "bubbled up" to the top
 *             Large numbers are ordered first
 *
 * EXAMPLES:   x = 9, y = 0, return 0
 *             x = 8, y = 68, return 1
 *             x = -24, y = 318, return 1
 *             x = -318, y = -688, return 0
 */
int high_to_low_compare(int x, int y);				// Choice 2

/*
 * FUNCTION:   int absolute_low_to_high_compare(int x, int y)
 *
 * ARGUMENTS:  Two sequential integers to compare
 *             For the sake of ordering, x should come before y
 *
 *  RETURNS:   If the absolute value of x is greater than or equal to the absolute value of y, return 1
 *             On error, return -1
 *             Return 0 for all other conditions
 *
 * NOTES:      This function compares the values of x and y
 *             If the absolute value of x is greater than or equal the absolute value of y,
 *                 y needs to be "bubbled up" to the top
 *             This function will not attempt to modify the values of x and y
 *             Smaller numbers, regardless of 'sign', are ordered first
 *
 * EXAMPLES:   x = 9, y = 0, return 1
 *             x = 8, y = 68, return 0
 *             x = -24, y = 318, return 0
 *             x = -318, y = -688, return 0
 */
int absolute_low_to_high_compare(int x, int y);		// Choice 3

/*
 * FUNCTION:   absolute_high_to_low_compare(int x, int y)
 *
 * ARGUMENTS:  Two sequential integers to compare
 *             For the sake of ordering, x should come before y
 *
 * RETURNS:    If the absolute value of x is less than or equal to the absolute value of y, return 1
 *             On error, return -1
 *             Return 0 for all other conditions
 *
 * NOTES:      This function compares the values of x and y
 *             If the absolute value of x is less than or equal the absolute value of y,
 *                 y needs to be "bubbled up" to the top
 *             This function will not attempt to modify the values of x and y
 *             Large numbers, regardless of 'sign', are ordered first
 *
 * EXAMPLES:   x = 9, y = 0, return 0
 *             x = 8, y = 68, return 1
 *             x = -24, y = 318, return 1
 *             x = -318, y = -688, return 1
 */
int absolute_high_to_low_compare(int x, int y);		// Choice 4


/*
 * FUNCTION:   bubble_sort(int * arrayOfInts, int numOfElements, int(*compare_function)(int, int))
 *
 * ARGUMENTS:  arrayOfInts - a pointer to an array of integers
 *             numOfElements - the dimension of the integer array found at the int pointer arrayOfInts
 *             compare_function - a function pointer; This function should take two ints as parameters
 *                 and return an int.  The expectation is that compare_function performs a comparison
 *                 of the two ints and returns a boolean value.  This boolean value should represent
 *                 whether or not the two ints should be swapped.  If the return value of compare_function
 *                 is 1, then the two ints should be swapped in place.
 *
 * RETURNS:    The total number of int swaps that were made
 *             0 if no swaps were made
 *             -1 if any pointer is NULL
 *             -2 if numOfElements is unrealistic
 *             -3 on any other error             
 *
 * NOTES:      This function is already defined below.  Do not modify this function.
 *             This function will sort, in place, the first "numOfElements" elements that are found
 *                 in the integer array found at pointer "arrayOfInts".  To accomplish this, bubble_sort()
 *                 will utilize the comparison function found at "compare_function" to accomplish this.
 *                 The expectation is that compare_function will compare two ints, n1 and n2.  In this, it
 *                 is expected that n1 comes before n2.  If n1 needs to swap with n2, compare_function will
 *                 return 1.  If not, compare_function will return 0.  Any other return value from
 *                 compare_function will be considered an error value (see: RETURNS).
 */
int bubble_sort(int * arrayOfInts, int numOfElements, int(*compare_function)(int, int));

int main(void)
{
	int arrayOfInts [] = {1,2,3,4,5,6,7}; // a pointer to an array of integers
	int numOfElements [7]; 
   // initialize array of 5 pointers to functions that each take
   // a void argument and return void
	int (*compared_function[4])(int,int) = { low_to_high_compare, 
      high_to_low_compare, absolute_low_to_high_compare, absolute_high_to_low_compare};

	puts ( "Welcome this code will take your integers to compare:.\n"
      "Low to high, high to low , absolute low to high and absolute high to low integers. \n");

	printf ( "%s", "\nEnter 0 to calculate low_to_high_comparition.\n"
      "1 to calculate high_to_low_ comparition.\n"
      "2 to calculateabsolute_low_to_high_ comparision.\n"
	  "3 to calculate absolute_high_to_low_ comparision.\n"
      "4 to end: ");

   scanf( "%d", &arrayOfInts );

   // process user's arrayOfInts
   while (arrayOfInts >= 0 && arrayOfInts < 4) 
   {
      // invoke function at location arrayOfInts in array f and pass
      // arrayOfInts as an argument
      (*compared_function [arrayOfInts])();
      
      printf( "%s", "\n\n 0 to calculate low_to_high_comparition.\n"
      "1 to calculate high_to_low_ comparition.\n"
      "2 to calculateabsolute_low_to_high_ comparision.\n"
	  "3 to calculate absolute_high_to_low_ comparision.\n"
      "4 to end: " );
      scanf("%d", &arrayOfInts);
   
   }// end while

}
/*
 * FUNCTION:   low_to_high_compare(int x, int y)
 *
 * ARGUMENTS:  Two sequential integers to compare
 *             For the sake of ordering, x should come before y
 *
 * RETURNS:	   If x is greater than or equal to y, return 1
 *             On error, return -1
 *             Return 0 for all other conditions
 *
 * NOTES:      This function compares the values of x and y
 *             If x is greater than or equal y, y needs to be "bubbled up" to the top
 *             Large numbers are ordered first
 *
 * EXAMPLES:   x = 9, y = 0, return 1
 *             x = 8, y = 68, return 0
 *             x = -24, y = 318, return 0
 *             x = -318, y = -688, return 1
 */
int low_to_high_compare(int x, int y)
{	
  
	if (x >= y) //If x is greater than or equal to y, return 1
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
	return 0;
}

/*
 * FUNCTION:   int high_to_low_compare(int x, int y)
 *
 * ARGUMENTS:  Two sequential integers to compare
 *             For the sake of ordering, x should come before y
 *
 * RETURNS:	   If x is less than or equal to y, return 1
 *             On error, return -1
 *             Return 0 for all other conditions
 *
 * NOTES:      This function compares the values of x and y
 *             If x is less than or equal y, y needs to be "bubbled up" to the top
 *             Large numbers are ordered first
 * 
 * EXAMPLES:   x = 9, y = 0, return 0
 *             x = 8, y = 68, return 1
 *             x = -24, y = 318, return 1
 *             x = -318, y = -688, return 0
 */
int high_to_low_compare(int x, int y)
{
	if (x <= y) //If x is greater than or equal to y, return 1
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
	return 0;
}

/*
 * FUNCTION:   int absolute_low_to_high_compare(int x, int y)
 *
 * ARGUMENTS:  Two sequential integers to compare
 *             For the sake of ordering, x should come before y
 *
 *  RETURNS:   If the absolute value of x is greater than or equal to the absolute value of y, return 1
 *             On error, return -1
 *             Return 0 for all other conditions
 *
 * NOTES:      This function compares the values of x and y
 *             If the absolute value of x is greater than or equal the absolute value of y,
 *                 y needs to be "bubbled up" to the top
 *             This function will not attempt to modify the values of x and y
 *             Smaller numbers, regardless of 'sign', are ordered first
 *
 * EXAMPLES:   x = 9, y = 0, return 1
 *             x = 8, y = 68, return 0
 *             x = -24, y = 318, return 0
 *             x = -318, y = -688, return 0
 */
int absolute_low_to_high_compare(int x, int y)
{	
	if ( abs(x) >=  abs(y)) //If x is greater than or equal to y, return 1
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
	return 0;

	
}

/*
 * FUNCTION:   absolute_high_to_low_compare(int x, int y)
 *
 * ARGUMENTS:  Two sequential integers to compare
 *             For the sake of ordering, x should come before y
 *
 * RETURNS:    If the absolute value of x is less than or equal to the absolute value of y, return 1
 *             On error, return -1
 *             Return 0 for all other conditions
 *
 * NOTES:      This function compares the values of x and y
 *             If the absolute value of x is less than or equal the absolute value of y,
 *                 y needs to be "bubbled up" to the top
 *             This function will not attempt to modify the values of x and y
 *             Large numbers, regardless of 'sign', are ordered first
 *
 * EXAMPLES:   x = 9, y = 0, return 0
 *             x = 8, y = 68, return 1
 *             x = -24, y = 318, return 1
 *             x = -318, y = -688, return 1
 */
int absolute_high_to_low_compare(int x, int y)
{
	if ( abs(x) <= abs(y)) //If x is greater than or equal to y, return 1
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
	return 0;
}

/*
 * FUNCTION:   bubble_sort(int * arrayOfInts, int numOfElements, int(*compare_function)(int, int))
 *
 * ARGUMENTS:  arrayOfInts - a pointer to an array of integers
 *             numOfElements - the dimension of the integer array found at the int pointer arrayOfInts
 *              compare_function - a function pointer; This function should take two ints as parameters
 *                 and return an int.  The expectation is that compare_function performs a comparison
 *                 of the two ints and returns a boolean value.  This boolean value should represent
 *                 whether or not the two ints should be swapped.  If the return value of compare_function
 *                 is 1, then the two ints should be swapped in place.
 *
 * RETURNS:    The total number of int swaps that were made
 *             0 if no swaps were made
 *             -1 if any pointer is NULL
 *             -2 if numOfElements is unrealistic
 *             -3 on any other error
 *
 * NOTES:      This function is already defined below.  Do not modify this function.
 *             This function will sort, in place, the first "numOfElements" elements that are found
 *                 in the integer array found at pointer "arrayOfInts".  To accomplish this, bubble_sort()
 *                 will utilize the comparison function found at "compare_function" to accomplish this.
 *                 The expectation is that compare_function will compare two ints, n1 and n2.  In this, it
 *                 is expected that n1 comes before n2.  If n1 needs to swap with n2, compare_function will
 *                 return 1.  If not, compare_function will return 0.  Any other return value from
 *                 compare_function will be considered an error value (see: RETURNS).
 */
int bubble_sort(int * arrayOfInts, int numOfElements, int(*compare_function)(int, int))
{
	int returnValue = -3;	// Default return value in case something dies
	int i = 0;				// Iterating variable
	int j = 0;				// Iterating variable
	int swapCount = 0;		// Number of element swaps that have been made

	if (!arrayOfInts || !compare_function)	// If either of the pointers are NULL...
	{
		returnValue = -1;	// ...return -1
	}
	else if (numOfElements < 2) // If the number of elements is unrealistic...
	{
		returnValue = -2; // ...return -2
	}
	else
	{
		for (i = 0; i < numOfElements; i++) // Iterate through all of the elements...
		{
			for (j = 0; j < (numOfElements - 1); j++) // ...comparing each element to all the other elements
			{
				if ((compare_function(*(arrayOfInts + j), *(arrayOfInts + j + 1))) > 0) // If the compare function suggests a swap...
				{
					/* ...swap the values stored in each element */
					*(arrayOfInts + j)		= *(arrayOfInts + j) ^ *(arrayOfInts + j + 1);
					*(arrayOfInts + j + 1)	= *(arrayOfInts + j) ^ *(arrayOfInts + j + 1);
					*(arrayOfInts + j)		= *(arrayOfInts + j) ^ *(arrayOfInts + j + 1);
					swapCount++; // A swap took place so increment the number of swaps counted
				}
			}
		}
		returnValue = swapCount; // Return the total number of swaps that took place
	}
	
	return returnValue;
}





int arrayOfInts [] = {1,2,3,4,5,6,7}; // a pointer to an array of integers
	int numOfElements [7]; 
   // initialize array of 5 pointers to functions that each take
   // a void argument and return void
	int (*compared_function[4])(int,int) = { low_to_high_compare, 
      high_to_low_compare, absolute_low_to_high_compare, absolute_high_to_low_compare};
    int i, j ; //counter
    
    printf ("Welcome to this code we will compare your arrayin different ways .\n");

    while( size_t j = 0; j < 4; j++)                     //while i counter iterate thru the *compared_function it will be increment through out the arrays
    {
        bubble_sort( arrayOfInts, numOfElements, (*compare_function[j])); //bubble sort function is declared below but all the sequentials need to bubble up to the top
        
        for(i = 0; i < numOfElements; i++)    //for j has to be less than the numOfElements which are 7 
        {
            printf(" Array[%d] is: %d\n", i, arrayOfInts[i]);
        }
        printf("\n");