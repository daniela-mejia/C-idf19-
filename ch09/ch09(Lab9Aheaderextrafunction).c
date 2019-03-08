/* Daniela Mejia
   02-19-2019
   Demo Lab 19.3
    
  Manual Linking

    Declare and define a simple function as a header
    Write a source file that calls the header's function
    Manually link the header's definition and your source file


*/


#include <stdio.h>
#include <string.h>

#define ERR_NULL_POINTER -1		                // Error:  Pointer passed was NULL
#define ERR_NONE_FOUND 0		                // Error:  Character not found
#define ERR_FIND_EQUALS_REPLACE -2              // Error:  To replace and replace are equal to each other
#define ERR_NON_PRINTABLE_CHARACTER -3          // Error:  One of the characters is not printable


int replace_char(char * string, char findThisChar, char replaceItWithThis);
int clearInput();

int main(void)
{
	/* FUNCTION INPUT ARRAYS */
	char beforeString1[] = { "Life is hard but so are you darling" }; // No newlines
	char * beforeStringArray[] = { beforeString1 };

	char userChar = 0; // Character to replace
	char replaceChar = 0; // Character replacing userChar
	int tempResults = 0;

	printf("What character would you like replaced?\n");
	userChar = getchar();
	printf("What character would you like to replace character %c with?\n", userChar);
	clearInput();
	replaceChar = getchar();

	// Implement for loop here for multiple strings
	tempResults = replace_char(beforeStringArray[0], userChar, replaceChar);

	// Check for errors we have 4 
	
	if (tempResults > 0)
	{
		printf("\n\n\n Your New String is: \n");
		printf("%s\n", beforeStringArray[0]);
		printf("Were %d instances of %c replaced with %c.\n", tempResults, userChar, replaceChar);
	}
	else if (tempResults == ERR_NULL_POINTER)
	{
		printf("The string was empty NADA");
	}
	else if (tempResults == ERR_NONE_FOUND)
	{
		printf("There were no instances of that character");
	}
	else if (tempResults == ERR_FIND_EQUALS_REPLACE)
	{
		printf("The character to replace was the same as the replace character just pick a different character");
	}
	else
	{
		printf("One of the characters entered was not printable");
	}

	return 0;
}

int replace_char(char * string, char findThisChar, char replaceItWithThis)
{
	int newChar = 0;
	//for i is < length of the string  all the changes will run 

	for (int i = 0; i < strlen(string); i++)
	{
		//checks if the element defined by i is equal to the value of original char, then replaces it in the if is equal to finf char then replace the string and increment to follow a loop 
		if (string[i] == findThisChar)
		{
			string[i] = replaceItWithThis;
			newChar++;
		}
	}
	
	printf("%d newChar were made \n", newChar);   //prints the newChar value how many letters changed
}


// This is an awesome function and useful if you need to clear the input buffer
int clearInput()
{
	while (getchar() != '\n');
}