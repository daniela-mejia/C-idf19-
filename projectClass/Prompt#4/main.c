/* 

Name: Daniela Mejia
Project :Roman -Numerical equivalent Decimal Values)  PROMPT #4
Date: 3/18/2019
Intructions :

    1. Write a program that prints a table of all the Roman Numerical of the Decimal numbers in the range from 1-100
    2. Roman numbers are represent by following charaters:
        I,V,X,L,C,D,M;
    3. Before writing the code, you should understan how roman numbers work and their rules:
        Repeating a roman numeral up to three 
        the addition of the number where V,L,D can not be repeated 
        because V=5; L = 50;
        Only repeat I,X,C.
        I=1 ; X = 10; C = 100; 

        ex : for number 4 you will add 1+1+1 = 3 means III  and  V that's equal to 5 then 4 = IV

*/
#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "clear.h"
#include <string.h>

int RomanMetric();

int main(void)
{ ////create a password to access your program
    const char password[15] = "idf";   // create a char for the password "idf"
    char pass[15] = {0};  // need to create a second string to compare
    int a; // create iteration variable
    
     
    printf("Enter your password: ");  // Ask user password input 
    scanf("%s", &pass); // scan the input 

    if(strcmp (pass,password)== 0) // create a loop where the two string are compare if they are access program else denied access.
    {
        RomanMetric();
           
    }
    else
    {
        printf("\nInvalid password! Denied Access. Try again\n");
    }
     
    getchar(); // gets a character (an unsigned char) from stdin
    return 0;  // return 
}

int RomanMetric()  //// Initialized two variables, one tfor Decimal number and other for the counter in loop.
{   
    int i,x;
    system ("cls");  // JUST MAKING IT PRETTIER
    puts("\n\n\n\nWELCOME TODAY YOU WILL LEARN THE ROMAN NUMBERS FROM 1-100");
    printf("Program made by Daniela Mejia");
    printf("\n\n\n\n\n Press enter to Start.");
    getch();
    system ("cls");
    
    
    printf("********************\n");  // Use some printf to make the header of  table pretty
    printf("| Decimal |  Roman  |\n");  // Create the header for your table two variables ( Decimal Number & Roman numeral)
    printf("| Number  |  Numeral|\n");
    printf("********************\n"); // more stuff to beautify your table header

    for(i=1; i<=100; i++)  //  Create a 'for' loop that will run throught the numbers 1 to 100 as ask in the instructions and increment with each iteration 
    {
        x=i;   // the decimal number is going to be whatever iteration is being calculated as it increments .
        printf("|  %d  |       ",x); // print the decimal number called in the first line. 
        // create an 'if' loop within a loop to get the roman rumbers within the different ranges remember 100 = C then start from there work your way down 
        //because we need to include the rest of the roman letters when the program gets to 99
        if(x==100)  // 1. First Loop is decimal number EQUAL 100
        {
            printf("C");  // print a C meaning c=100
            x=0;         // this won't decrement so just decimal number equal 0 and the program will stop there
        }
        else if (x>=50) // 2. 'else if' loop the decimal number is bigger and EQUAL to 50 becase we need to include L =50
        {   
            printf("L");  // Printf L because L=50
            x-=50;    //evaluate the decrement for the decimal number from 99 to 50  so L can be added from 50 on in our table. 
        }
        while(x>=10) // 3. create a loop 'while' the numbers get to every 10 and up print and X 
        {
            printf("X");  // obs print X because X=10
            x-=10;   // evaluate the decrement for the decimal number from 99 to 10 so X can be added from 10 on in our table.
        }
        if(x>=5)  // 4. 'if' the decimal number is bigger and EQUAL than 5 then (take in count all roman numeric sytem rules)
        {
             if(x%10==9)   // if this decimal number modulus 10 is equal to nine print in roman number IX else print V that is equal to 5.
             {
                    printf("IX");  // print IX everytime the reminder number is 9 so 19, 29, 39,.... 99.
                    x-=9;  //evaluate the decrement for the decimal number from 99 to 9 so IX can be added from 9 on in our table.
            }
            else  //else a V=5  will be added to the number 
            {
                    printf("V");  // print V because V=5.
                    x-=5;  // evaluate the decrement for the decimal number from 99 to 5 so V can be added from 9 on in our table.
            }      
        }
        
        while(x>0) // 5. Create a 'while' loop  that will rum from 0 to 100 (take in count all roman numeric sytem rules)
        {
            if(x%10==4) // any number reminder that is EQUAL to 4 will be print IV that's the equivalent of 4 else print I that equal to 1 
            { 
                printf("IV"); // print IV that is 4
                x-=4; // evaluate the decrement for the decimal number from 99 to 4 so IV can be added from 4 on in our table.
            }
            else {
                printf("I"); 
                x-=1; // evaluate the decrement for the decimal number from 99 to 4 so IV can be added from 4 on in our table.
            }
            
        }
        printf("\n");// print the iteration
        

    }
   
}