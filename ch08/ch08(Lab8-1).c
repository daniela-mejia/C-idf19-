/*
    Purpose
        Define shadow_sequence_number() as a recursive function that returns a "shadow sequence" number of position "placeNumber"
        Do not calculate a sequence number greater than 2300
    Parameters - Shadow Sequence number position to calculate
    Return Value
        placeNumber on success
        105 if placeNumber is unrealistic or dangerous
    The Shadow Sequence:
        Starts with 9 and 0 then each subsequent number is calculated by adding the previous value and the square of the position
        S(n) = S(n-1) + (n*n)
*
*  Name: Kyle Kruse
*  Date: 14 Feb 2019
*  Project: Performance Lab 8c - Shadow Sequence
*
*/

#define MAXIMUM_SEQ_NUM (2300) //Maximum number allowed to be calculated
#define ERROR_VALUE (105) //Error value to return if number inputted is not allowed (negative or greater than max allowed)
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

unsigned long shadow_sequence_number(int placeNumber);

int main(void)
{
	unsigned long userInput = 0;

    //Promps user for a number to calculate the Shadow Sequence of
    fprintf(stdout, "Which Shadow Sequence number would you like to calculate? \n");
    fscanf(stdin, "%ld", &userInput);

    //Return the answer
    fprintf(stdout, "Your answer is: %ld", shadow_sequence_number(userInput));

	return 0;
}

unsigned long shadow_sequence_number(int placeNumber)
{
	//Initialize return value variable
    int shadowResult = 0;
    
    //Return error value if number inputted is negative
    if (placeNumber < 0)
    {
        shadowResult = ERROR_VALUE;
    }
    //Return error value if number inputted is greater than the max limit (2300)
    else if (placeNumber > MAXIMUM_SEQ_NUM)
    {
        shadowResult = ERROR_VALUE;
    }
    //Result for shadow_sequence(1) is always 9. No need to calculate.
    else if (placeNumber == 1)
    {
        shadowResult = 9;
    }
    //Result for shadow_sequence(2) is always 0. No need to calculate.
    else if (placeNumber == 2)
    {
        shadowResult = 0;
    }
    else
    {
        //Actual math being performed recursively
        //S(n) = S(n-1) + (n * n)
        shadowResult = shadow_sequence_number(placeNumber -1) + (placeNumber * placeNumber);
        
    }
	//Returns the value to main()
    return shadowResult;
}
Collapse



