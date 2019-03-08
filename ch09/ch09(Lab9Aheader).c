/* Daniela Mejia
   02-19-2019
   Lab 9A
    
  Manual Linking

    Declare and define a simple function as a header
    Write a source file that calls the header's function
    Manually link the header's definition and your source file


*/



#include <stdio.h>
#define MAXIMUM_SEQ_NUM (2300)   //Do not calculate a sequence number greater than 2300
#define ERROR_VALUE (105)
#define _CRT_SECURE_NO_WARNINGS 1

#define MANUAL_TEST     //  provide input from user manually
#define AUTO_TEST       // Runs unit tests on unsigned long shadow_sequence_number(int placeNumber) into the program 



unsigned long shadow_sequence_number(int placeNumber);                //Define shadow_sequence_number() as a recursive function
void clean_stdin();

int main(void)
{
	//Initializing and Declaring variables
    int Input = 0; //
    unsigned long shadowNumber = 0;          //holds the return from shadow_sequence_number function

    //The prescribed Manual Tester
    #ifdef MANUAL_TEST
	int calcShadow = 0;
	int tempValue = 0;
    int i = 0;  //increment 

	printf("write a number that you would like to calculate?  \n");
	scanf("%d", &calcShadow);
	

	for (i = 1; i <= calcShadow; i++)         //
	{
		tempValue = shadow_sequence_number(i);
		printf("%d :\t%lu \n", i, tempValue);
	}
    #endif
    //The prescribed Auto Tester        
    #ifdef AUTO_TEST

    #define BUFFER_SIZE 24  // by 24 test run it will surpass MAXIMUM_SEQ_NUM 
	
    tempValue = 0;
    

	int numOfTestsRun = 0;        // increment if the test runs
	int numOfTestsPassed = 0;     // increment if the test pass
	int placeNumbers[BUFFER_SIZE] = { -31337, ((MAXIMUM_SEQ_NUM + 1) * -1), (MAXIMUM_SEQ_NUM * -1), -1337, -100, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 100, 1337, MAXIMUM_SEQ_NUM, (MAXIMUM_SEQ_NUM + 1), 31337 };
	unsigned long newNums[BUFFER_SIZE] = { ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, ERROR_VALUE, 9, 0, 9, 25, 50, 86, 135, 199, 280, 380, 501, 645, 814, 338345, 797553920, 4058312045, ERROR_VALUE, ERROR_VALUE };

   
	for ( int i = 0; i < BUFFER_SIZE; i++)     //i has to be less than BUFFER_SIZE fdue that this can't surpass MAXIMUM_SEQ_NUM
	{
        tempValue = shadow_sequence_number(placeNumbers[i]);
		numOfTestsRun++;   //increment with every test 

		if (tempValue == newNums[i])
		{
			numOfTestsPassed++;
		}
	}

	printf("\nNumber of tests run:\t%d\n", numOfTestsRun);
	printf("\nNumber of tests passed:\t%d\n", numOfTestsPassed);
    #endif

	return 0;
}

unsigned long shadow_sequence_number(int placeNumber)
{
	//Function that performs the math for obtaining the shadow number
    int newNum; //declares variable

    //error handling for unrealistic or dangerous inputs
    if(placeNumber <= 0 || placeNumber > 2300)
    {
        newNum = 105;                    
    }
    else if(placeNumber == 1)
    {
        newNum = 9;            // the test starts at s(1) = 9.
    }
    else if(placeNumber = 2)
    {
        newNum = 0;
    }
    else  // Assign the math expression to shadow the number /S(n-1) + (n*n)
    {
        newNum = shadow_sequence_number(placeNumber - 1) + (placeNumber * placeNumber); 
    }

    return newNum;    // and keep testing the numbers 
}