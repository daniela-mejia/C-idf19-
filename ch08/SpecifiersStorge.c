#include<stdio.h>

int main (){

    int i = 0;

    int normVar = 1;
    static int statVar = 1;

    for (i = 0; i < 10; i++)
    {
        printf("norm = %-2d\t", normVar);
        printf("stat = %-2d\n", statVar);

        normVar++;
        statVar++;
    }

///static variable output 1///
    norm = 1     stat = 1
    norm = 2     stat = 2
    norm = 3     stat = 3
    norm = 4     stat = 4
    norm = 5     stat = 5
    norm = 6     stat = 6
    norm = 7     stat = 7
    norm = 8     stat = 8
    norm = 9     stat = 9
    norm = 10    stat = 10

///static variable example 2///
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        int normVar = 1;
        static int statVar = 1;

        printf(“norm = %-2d\t”, normVar);
        printf(“stat = %-2d\n”, statVar);

        normVar++
        statVar++
    }

///static variable output 2///
    norm = 1     stat = 1
    norm = 1     stat = 2
    norm = 1     stat = 3
    norm = 1     stat = 4
    norm = 1     stat = 5
    norm = 1     stat = 6
    norm = 1     stat = 7
    norm = 1     stat = 8
    norm = 1     stat = 9
    norm = 1     stat = 10

///static variable example 3///
    int i = 0;

    for (i = 0; i < 10; i++)
    {
        int normVar = 1;
        static int statVar = 1;

        printf(“Norm = %-2d\t”, normVar);
        printf(“Stat = %-2d\n”, statVar);

        normVar++;
        statVar++;
    }

    printf(“Norm = %-2d\t”, normVar);
    printf(“Stat = %-2d\n”, statVar);    

///static variable output 3///
//NONE...will result in a compiler error!!!!
}