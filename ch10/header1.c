#define HEADER_YES 1;
#define HEADER_NO 0;

extern int smaller(int a, int b)
{
    if(a < b)
    {
        return HEADER_YES;
    }
    else
    {
        return HEADER_NO;
    }
}