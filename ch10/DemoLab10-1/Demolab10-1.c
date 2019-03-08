#include <stdio.h>
#include "add_num.h"

#define ADD_NUMS(x, y) add_num(x, y)    //it will return whatever math problem you wrote in add_num
#define STRINGIFY(x) #x               //definy by x
#define DEBUG(x) printf(#x " is %d\n", x)   // (#) will string-ize something. operator
#define MERGE(x, y) STRINGIFY(x##y)  // double hash


int main()
{ //initialized and declare variables

    int x = 10;
    int y = 5;
    
    DEBUG(x);
    DEBUG(y);
    
    printf("Total is: %d\n", ADD_NUMS(x, y));
    puts(MERGE(William, Staud));
    printf("The magic word is NOT: %s\n", MAGIC_WORD);
    #undef MAGIC_WORD
    #define MAGIC_WORD "Stack Overflow"
    printf("The magic word IS: %s\n", MAGIC_WORD);

    return 0;
}
