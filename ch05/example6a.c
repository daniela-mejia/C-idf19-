//program fscanf and uint32_t the unit of a int
//Gets the Hypontenuse of a triangle
//02-05-2019
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <inttypes.h>
  
int main()
{
    uint32_t UserInput = 0;
    uint32_t bitChecker = 1;

    printf("Please enter a number: ");
    fscanf(stdin, "%u", &UserInput);
    bitChecker = bitChecker << 31;
    
    while(bitChecker > 0)
    {
        if((bitChecker & UserInput) == 0 )
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
        bitChecker = bitChecker >> 1;
    }

}