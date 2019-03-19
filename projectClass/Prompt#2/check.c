/* Name: Daniela Mejia
Project :(Writtin  the word Equivalengt of a check amount )  PROMPT #2
Date: 3/19/2019
Intructions :
1. One common security method requires that the check amount be both written in numbers and "spell out" in words
2. Even if someone is able to able to alter the numerical amount of the check, it's extremely difficult to change the amount in words.
3. Write a program that inputs a numeric check amount and writes teh word equivalengt of the amount in words.
4. For example, the amount 52.43 should be written as 
FIFTY TWO and 43/100


*/

#include<stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "clear.h"


void check();  // excecution function 
void oneDigit(char n); // function single digits
void digitTens(char x); // function for tens (10....90s)
void digitTeen(char x); // function for teens (11....19)
void digitHundreds(char x); //function for hundreds 

int main(void)
{ ////create a password to access your program
    const char password[15] = "idf";   // create a char for the password "idf"
    char pass[15] = {0};  // need to create a second string to compare
    int a; // create iteration variable
    
     
    printf("Enter your password: ");  // Ask user password input 
    scanf("%s", &pass); // scan the input 

    if(strcmp (pass,password)== 0) // create a loop where the two string are compare if they are access program else denied access.
    {
        check();
                  
    }
    else
    {
        printf("\nInvalid password! Denied Access. Try again\n");
    }
     
    getchar(); // gets a character (an unsigned char) from stdin
    return 0;  // return 
}
void check(){
    
    char words[256]; // create a char array max legth of words amount 

    int num; // create a variable for num input
    int i; // create a variable for iterator

    puts("\n\n\n\nWELCOME THIS PROGRAM CONVERT NUMBERS TO WORDS\n");
    printf("Program made by Daniela Mejia\n");
    printf("\n\n\n\n\n Press enter to Start.\n");
    getch();
    system ("cls");
    printf (" Enter a number up to hundreds to convert to check amount : ");
    scanf("%s", words);

    int leng = strlen(words); // Create an string length of the array
    num = leng; // then your number input will be the integer string 

    while( i!=leng ) // 1. create a while loop while the iteration is not the lenght of the string then start from position 1
    {
        if (num == 1) // a. create a loop in the loop where the input number equal to 1 this will read the first number from left to right
        {
            if (words[0] == '0')  // if the array index 0 is 0 just print zero
            {
                printf("zero");
            }
            oneDigit(words[leng-1]); // create a function were all the single digits will be call is easier and not that ugly looking of a code (ex 1,2,3....,9 in words) use swtich cases
                                    //called the length of the string minus the 1 for null position 
            num=0; // do not iterate so your number variable will go to zero
        }
        if(num == 2) // b. create a loop in the loop where the input number equal to 2 this will read the first two numbers from left to right
        {
            if (words[leng-num] == '1')    //if the array index length of the num minus the variable num  is equal to one
            { 
               digitTeen(words[leng-num+1]);  // created other function were the teen numbers are (11...19 in words tho) use swtich cases
                                              // call in the function the string with index length minus the num + 1 so it will give you the words of the two numbres from left to right
               num=0;// do not iterate so your number variable will go to zero
               break; // return or break
            }
             
            else if(words[leng-num]!='1') // else if the array index length of the number minus the variable num is NOT  equal to one
            {
               digitTens(words[leng-num]);  // created other function use swtich cases  were the tens numbers are (10,20,30.......90 in words tho) 
                                            // call in the function the string with index length minus the num + 1 so it will give you the words of the two numbres from left to right
               num--;  // then decrease iteration of the number variable 
            }
          
        }
        if(num == 3) //c. create a loop in the loop where the input number equal to 3 this will read the first three numbers from left to right
        {
           digitHundreds(words[leng-num]); //created other function use swtich cases  were the tens numbers are (10,20,30.......90 in words tho) 
                                         // call in the function the string with index length minus the num so it will give you the words of the three numbres from left to right
           num--; //// then decrease iteration of the number variable 
        }
        
    }
    
}

void oneDigit(char n)
{//Create a switch case for all the single digits (1,2.......9) and print in numbers
      switch(n)
      {
        /* case '0':printf("Zero ");   Is already in last function check () */
 
         case '1':printf("One "); 
        break; 
         case '2':printf("Two "); 
        break; 
         case '3':printf("Three "); 
        break; 
         case '4':printf("Four "); 
        break; 
         case '5':printf("Five "); 
        break; 
         case '6':printf("Six "); 
        break; 
         case '7':printf("Seven "); 
        break; 
         case '8':printf("Eight "); 
        break; 
         case '9':printf("Nine "); 
        break; 
      } 
   } 
   void digitTens(char x)
   { ////Create a switch case for all the tens (10,20.....90) and print in numbers
      switch(x)
      { 
         case '1':printf("Ten ");
         break; 
         case '2':printf("Twenty ");
         break; 
         case '3':printf("Thirty ");
         break; 
         case '4':printf("Fourty ");
         break; 
         case '5':printf("Fifty ");
         break; 
         case '6':printf("Sixty ");
         break; 
         case '7':printf("Seventy ");
         break; 
         case '8':printf("Eighty ");
         break; 
         case '9':printf("Ninety ");
         break; 
      } 
   } 
   void digitTeen(char x)
   { //Create a switch case for all the tens (11,12......,19) and print in numbers
      switch(x){
         case '0':printf("Ten");
         break;
         case '1':printf("Eleven ");
         break; 
         case '2':printf("Twelve ");
         break; 
         case '3':printf("Thirteen ");
         break; 
         case '4':printf("Fourteen ");
         break; 
         case '5':printf("Fifteen ");
         break; 
         case '6':printf("Sixteen ");
         break; 
         case '7':printf("Seventeen ");
         break; 
         case '8':printf("Eighteen ");
         break; 
         case '9':printf("Nineteen ");
         break; 
      } 
   } 
   void digitHundreds(char x)
   { //Create a switch case for all the tens (10,20.....90) and print in nuumbers
      if(x !='0')  // create a loop where your variable from the function of single digits is not '0' then  then print hundred
      {
         oneDigit(x);
         printf("Hundred ");
      }
   }