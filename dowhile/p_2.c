#include <stdio.h>

void main()
{
    printf("RA2211042010027\n");
    printf("Enter a number");
    int n;
    scanf("%d",&n);
     int s=n;  
    while(1==1)
    {
        n=s;
        s=0;
        for(;n>0;n/=10)
        {
            s+=(n%10);
        }
        if(s<10)
        break;
    }  
    if(s==1)
    printf("Magic Number");
    else
    printf("Not Magic Number");
}
