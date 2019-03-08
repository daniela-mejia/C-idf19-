#define HEADER_ 1
#define HEADER_NO 0

extern int smaller(int a, int b)
{
    if(a < b)
    {
        return MY_HEADER_YES;
    }
    else
    {
        return MY_HEADER_NO;
    }
}