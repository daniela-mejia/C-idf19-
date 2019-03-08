/*  Daniela Mejia
   02-19-2019
   Demo Lab 19.3
   
   Manual Linking
   Declare and define a simple function as a header
    Write a source file that calls the header's function
    Manually link the header's definition and your source file 
*/

#include <stdio.h>
#include <math.h>
#include "Student_header.c"
#include "Student_header.h"


int main()
{
	//This calls add function written in student_header.h
	
	STUDENT_HEADER(5, 5);

	// Same for the multiply function in myhead.h 
	printf("Senpai Notice me megh\n");
	
	return 0;
}


    

