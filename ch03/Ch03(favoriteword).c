/*# Lab 3B: Strings

1. ### Declare and zeroize a char array with a dimension of 256
2.2. ### Assign your chosen phrase to the leading elements of that array
3. ### Explicitly verify your string is nul-terminated
4. ### Print your string */

int main ()
{
    char Array [] ={"Icecream\0"};
    

    printf ("My Favorite word is %s", sizeof Array);
   
    int i =0 ;

    for (i=0, i < Array [i] =! '0', i ++) // i start in zero and iterate all the string of the array before \0 and increment until get the total lenght
    {
        printf("this is the lenght of the string", i );
    }

    return 0;


}