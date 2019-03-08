#include <stdio.h>
// Programer :Daniela Mejia
// Date : 02-04-2019
// Lab 4d -1
int main ()
{
    char FirstName [10] = {0};  //assumed max name , middle and last name max  is 10 letter
    char MiddleName [10] = {0};
    char LastName [10] = {0};

    printf ("Write full name (with a tab in between):  \n");    //do not forget to tab betwwen words 
    
    scanf ("%32s\t%32s\t%32s", &FirstName, &MiddleName, &LastName);      // give max of 32 posistions 

    printf("so your full name is :  s\t%s\t%s\t\n", FirstName, MiddleName, LastName);  // make it look nice tab in between 


    return 0;
}