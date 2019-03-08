/* Students allocation for memory managemnet using malloc */

#include<stdio.h>
#include<stdlib.h>
 
int main()      
{ //we have declared a pointer to float p and a float variable s, where it is initialized to 0.
    float *p, sum = 0;  // we have declared two variables i and n of type int
    int i, n;
 
    printf("Enter the number of students: ");  // printf() function prints "Enter the number of students: " to the console.
    scanf("%d", &n);    //scanf() is used to read input from the user, which is then stored in a variable n.
  
    // allocate memory to store n variables of type float
    p = (float*)malloc(n*sizeof(float));   //uses malloc() function to dynamically allocate memory to store n numbers of type float. The variable p is of type pointer to float or (float*), that’s why the result of malloc() function is typecasted using (float*).
 
    // if dynamic allocation failed exit the program
    if(p==NULL)
    {
        printf("Memory allocation failed");
        exit(1); // exit the program
    }
 
    // ask the student to enter marks
    for(i = 0; i < n; i++)
    {
        printf("Enter marks for %d student: ", i+1);   ////we have a for loop which repeatedly asks the user to enter marks n times. 
        scanf("%f", p+i);        //Notice that in scanf() statement p + i is used without & sign because p is a pointer.
    }
 
    // calculate sum
    for(i = 0; i < n; i++)  //increment less than the n user input
    {
        sum += *(p+i);   //we have another for loop which accumulates the marks of n students in a variable sum.
    }
 
    printf("\nAverage marks = %.2f\n", sum/n);  //Average marks are displayed by dividing total marks by a total number of students.
 
    // signal to operating system program ran fine
    return 0;
}