/*Programer: Daniela Mejia
    Date : 29-01-2019
    Project: Demo1-3
    
    With this code you can change it's own to a different kind of variable from one to another(float, integer, double)
*/

#include<stdio.h>

int main (void)
{
  //declaration and initialization of variables//
   
    int a= 1;  
    float b= 1.1;  
    double c = 3.1456;
    char  d = 'f';
       
    //Using printf to change the different variables 
    printf("Your int %d change to a float %f \n", a, (float) a);  
    printf("Your int %d change cast to a char %c \n", a, (char) a);
    printf("Your float %f change cast to a double %lf \n", b, (double) b);   //ex. printf(".....%variablea to %variablea different variable \n", a (...variable kind...))
    printf("Your double %lf change cast to a float %f \n", c, (float) c);
    printf("Your char %c change to a int %d \n", d, (int) d);
    printf("63 change cast to a char %c \n", (char) 63);

    //Always return 
    return(0);
}
   
