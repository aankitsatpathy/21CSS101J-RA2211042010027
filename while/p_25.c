#include <stdio.h>

void main()
{
    printf("RA2211042010027\n");
    printf("Enter a number");
    int n;
    scanf("%d",&n);
    int s=0;
    while(n>0)
    {
        if(n%10==0)
        s++;
        n/=10;
    }
    if(s!=0)
    printf("Duck Number");
    else
    printf("Not Duck Number");
}
