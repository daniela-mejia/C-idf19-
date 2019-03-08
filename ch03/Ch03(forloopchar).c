#include <stdio.h>

/**Daniela Mejia
   1/30/2019
   Lab 3A */

int main(void)
{ // student ages in 2019=01 class
	int Students[12+1]={0};
		Students[0] =29;
		Students[1] = 21;
		Students[2] = 22;
    	Students[3] = 23;
    	Students[4] = 24;
    	Students[5] = 25;
    	Students[6] = 27;
    	Students[7] = 28;
    	Students[8] = 20;
    	Students[9] = 30;
  		Students[10] = 31;
    	Students[11] = 32;
    	Students[12] = 33;

	// favorite saying
	char Saying [154] = {"\nKeep\nworking\nhard\n"};       // favorite saying do not forget \n
	Saying [154] = '\0';								// create a null index in this case is the last index
                   
	int i = 0;                                             // don't foget to declare i

	
	printf ("\nClass age average\n");
	for(i=0; i < 12; i++)  // run iterations up to 12 
	
	{
		printf("Age %d is %d\n", i + 1, Students[i]);       // i+1: dimension equal to the number of students + 1
	
	}
 
	printf ("%s\n", Saying);                       // %s: your saying 
	
	return 0;
}