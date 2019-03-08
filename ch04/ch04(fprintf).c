#include <stdio.h>
// this program are examples on how to use fprintf (stdout,"  %...", &variable)
int main ()
{
    int theAnswer = 30;            // Life, universe, & everything
    float pi = 3.141592;            // Pi
    double posSqrtTwo = 1.41421356237;    // Positive square root of 2
    char answerNum1 = 63;    // A nick name

 
    fprintf(stdout, "The answer is %d. \n", &theAnswer);
    fprintf(stdout, "Pi is approximately equal to %f. \n", &pi);
    fprintf(stdout, "The square root of 2 is %f. \n", &posSqrtTwo);
    fprintf(stdout, "what means: %c \n", &answerNum1);
   
    return 0;
}
