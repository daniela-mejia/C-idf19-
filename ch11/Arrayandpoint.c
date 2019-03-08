/* 
ARRAYS AND POINTERS STUDENT LAB #3:

The function defines counter variable i as the array subscript.
 The for statement header (line 29) performs the entire copy operation—its body is the empty statement. 
 The header specifies that i is initialized to zero and incremented by one on each iteration of the loop.
 The expression s1[i] = s2[i] copies one character from s2 to s1. 
 When the null character is encountered in s2, it’s assigned to s1, and the value of the assignment becomes the value assigned to the left operand (s1).
 The loop terminates when the null character is assigned from s2 to s1 (false). */

 //Copying a string using array notation and pointer notation
 #include<stdio.h>
 #define SIZE 10

 void copy1 (char * const s1, const char * const s2);  // prototype
 void copy2 (char * s1, const char *s2); //prototype

 int main ()
 {
     char string1 [SIZE]; //create array string1
     char *string2 = "Hello"; // create a pointer to a string
     char string3 [SIZE]; //create array string3
     char string4 [] ="Good Bye"; //create a pointer to a string 


     copy1 (string1,string2);
     printf(" String1 = %s \n",string1);

     copy2 (string3, string4);
     printf(" String3 = %s \n",string3);
 }

 //copy s2 to s1 using Array notation

 void copy1 (char * const s1, const char * const s2)
 {
     size_t i;  //counter
     // loop through strings
     for ( i=0; (s1[i] = s2[i]) != '\0' ; ++i)
     {
         ; //do nothing in the body
     } //end for
 }  //end for copy1
// copy s2 to s1 using pointer notation
void copy2(char *s1, const char *s2)
{
    for (i=0; (*s1=*s2) != '0'; ++s1, ++s2)
    {
        ;  //do nothing in body
    }//end for
} //end function copy2