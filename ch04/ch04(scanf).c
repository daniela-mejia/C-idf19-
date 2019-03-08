#include <stdio.h>
// Read a string into a char array
//Specify a field-width to protect against buffer overflow
//Ensure the field-width leaves room for the nul-terminator
//Stop reading at the first capital letter or new line

int main ()
{
    char whateves [256]= {0};

    printf("Just write some word with a cap letter in the middle: \n");
    scanf("%255[^A-Z\n]s", whateves); // ^ anything after this trigger STOP IN ASCII TABLE
    printf("everthing but after cap letter: %s\n", whateves);

    return 0;
    
}