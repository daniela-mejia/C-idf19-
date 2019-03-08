#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fp1, *fp2;
    char name;

    fp1 = fopen("C:/Users/DOTlaptop/Desktop/ch12/song.txt","r");
    fp2 = fopen("C:/Users/DOTlaptop/Desktop/ch12/demoreadabdwrite.txt", "w");

    while (1)
    {        
        name = fgetc(fp1);
        if (name == EOF)
        break;
        else
        fputc(name, fp2);
    }
    printf("File copied Successfully!");
    fclose(fp1);
    fclose(fp2);
}

