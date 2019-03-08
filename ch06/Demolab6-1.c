#include <stdio.h>
// scanf 
int main ()
{
    char Age [256] ={0};
    
        
    printf(" How old are you: \n");
    scanf("255%s \n", Age);

    if (Age [0] != 0)  //age not zero
    {
        printf("%s", Age);
    }

    return 0;
}