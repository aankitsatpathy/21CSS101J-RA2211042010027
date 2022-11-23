
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
    printf("RA2211042010027\n"); 
    int n;
    scanf("%d",&n);
    pos(n);
}
