#include <stdio.h>
//This program are fscanf examples    fscanf(stdin, "...%...", &variable)
int main ()
{   
    int Num1;
    float lightvel;
    double SquareRoot;
    char letter [10];

      
    
    fscanf (stdin, "result : %d. \n", &Num1);
    printf ("The answer is %d. \n", &Num1);


    fscanf (stdin, " Constant number: %f /n", &lightvel);
    printf ("Pi is approximately equal to %f. \n", &lightvel);

    fscanf (stdin, " sq root of  300 is: %lf\n", &SquareRoot);
    printf ("The square root of 2 is %f. \n", &SquareRoot);

    fscanf (stdin, " your letter is  %s%c \n", letter);
    printf ("what means: %c \n", letter);
    
    return 0;

}