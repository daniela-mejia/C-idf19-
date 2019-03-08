/*/*Name: Daniela Mejia
    Date: 02/11/2019
    Lab 7-3 c
    
DO-WHILE LOOP
*/

#include<stdio.h>
#include<ctype.h>

int main()
{
    // Initialize a 26 element int array to 0.
    int Array [26] = {0};     //Initialize a char variable to 0.
    char random = '0';        //user input of a character 
    int i = 0;
    
    printf("write a character\n"); 
    
    //  Use a DO-WHILE loop to input, 
    do
    {    
        random = getc(stdin);    //but not store, a string one character at a time from stdin without scanf()!! intead getc()


        if ((random >= 65 && random <= 90) || (random >= 97 && random < 122))  // //Ensure non-letters (i.e. Ctrl-D, tab) are safely handled
        
        //convert the character to upper case using toupper()
       
        { 
            Array [i]= (toupper(random));    //toupper () converts to uppercase
            i++;        // increment 
        }
            
    }   
    //End the loop when a newline is read.
    while (random != '\n'); 
    //    Print the results using a for loop ()
    for (i = 0; i < 26; i++)
    {
        printf("%c \t", Array[i]);
    }
    return 0;
}