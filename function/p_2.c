
#include <stdio.h>
void pos(int a)
{
    if(a>0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negetive");
    }
}
void main()
{
    int n;
    scanf("%d",&n);
    pos(n);
}
