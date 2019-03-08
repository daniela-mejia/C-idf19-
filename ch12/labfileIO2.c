#include <stdio.h>

int main ()
{
    int num;
    FILE *fptr;
    fptr = fopen("C:/Users/DOTlaptop/Desktop/poem.txt","r");
    num = fgetc(fptr);  //get letter by letter of the string

    while ( num != EOF )  //num is not at the END OF FILE (EOF)
    {
        putchar(num);   // putchar= writes a character (an unsigned char) specified by the argument char to stdout.
        num = fgetc(fptr); // fgetc=gets the next character (an unsigned char) from the specified stream and advances the position indicator for the stream.
           
    }
    fclose(fptr);    
    return 0; 
}