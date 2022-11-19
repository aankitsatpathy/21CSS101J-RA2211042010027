
#include <stdio.h>

void main()
{
    printf("RA2211042010027\n");
    printf("Enter a number");
    int n,s;
    scanf("%d",&n);
    s=n*n;
    int sum=0;
    while(s>0)
    {
        sum+=(s%10);
        s/=10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}
