#include <stdio.h>

int main(void)
{
    int numberStudents[14 + 1] = {0};
    numberStudents[0] = 29;

    numberStudents[1] = 22;
    numberStudents[2] = 22;
    numberStudents[3] = 22;
    numberStudents[4] = 22;
    numberStudents[5] = 22;
    numberStudents[6] = 22;
    numberStudents[7] = 22;
    numberStudents[8] = 22;
    numberStudents[9] = 22;
    numberStudents[10] = 22;
    numberStudents[11] = 22;
    numberStudents[12] = 22;
    numberStudents[13] = 22;
    numberStudents[14] = 22;

    for(int i = 0; i < sizeof(numberStudents)/sizeof(int); i++)
    {
        printf("Age of Student %d is %d\n",i+1,numberStudents[i]);
    }

    char quote[] = {"smarter\nnot\nharder\0"};
    
    for(int i = 0; i < sizeof(quote)/sizeof(char); i++)
    {
        printf("%c",quote[i]);
    }
    
    return 0;
}