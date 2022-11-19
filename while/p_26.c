#include <stdio.h>

void main()
{
    printf("RA2211042010027\n");
    printf("Enter a number");
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int s=1;
    while(i<=n1)
    {
        if(n1%i==0&&n2%i==0)
        s=i;
        n/=10;
    }
    
    printf("GCD = %d",s);
}
