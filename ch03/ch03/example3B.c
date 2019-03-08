/*# Lab 3B: Strings

1. ### Declare and zeroize a char array with a dimension of 256
2.2. ### Assign your chosen phrase to the leading elements of that array
3. ### Explicitly verify your string is nul-terminated
4. ### Print your string */

int main ()
{
    char Array [256] ={"I love U\0"};

    for (i=0, i < 8 , i ++)
    {
        printf("%255s", Array);
    }

    return 0;


}