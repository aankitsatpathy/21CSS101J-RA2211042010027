#include <stdio.h>
#include <math.h>
void main()
{
    printf("RA221142010027\n");
    int a,r=0;
    printf("enter a number : ");
    scanf("%d",&a);
    while(a>0)
    {
        int d=a%10;
        r=r*10+d;
        a/=10;
    }
    printf("Reverse = %d",r);
}
