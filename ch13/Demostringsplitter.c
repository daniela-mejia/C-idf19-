/*  char * split_the_string(char * string_ptr, char delimiter);

    Test input should include:
        Input string
        Delimiter
        Expected return value
    Only Address Arithmetic is permitted
    Write one test to cover every requirement
    Print the human-readable results
*/
 #include<stdio.h>
 #include <stdlib.h>
 #include <string.h>

char * split_the_string(char * string_ptr, char delimiter);

struct Functionstruct 
{
    char *string_ptr = NULL;   //Input string
    int init_size = 0;
    char *delimiter = NULL;     //delimiter
};
 
int main ()
{
    printf("Expected String:\tNULL\n\t");  //Expected return value
    return 0;
}

char * split_the_string(char * string_ptr, char delimiter)
{
    struct Functionstruct;

    char *string_ptr [] = "coding is hard";   //Input string
    int init_size = strlen(string_ptr);
    char *delimiter [] = "whatever";     //delimiter
    
    char *ptr = strtok (string_ptr,delimiter);
   

	while(ptr != NULL)
	{
		printf("'%s'\n", ptr);
		ptr = strtok(NULL, delimiter);
           
	}

	/* This loop will show that there are zeroes in the str after tokenizing */
	for (int i = 0; i < init_size; i++)
	{
		printf("%d ", string_ptr[i]); /* Convert the character to integer, in this case the character's ASCII equivalent */
							   
	}
	printf("\n");

	return 0;
}