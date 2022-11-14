#include <stdio.h>
#include <math.h>
void main()
{
    printf("RA221142010027\n");
    int a,p=0,t;
    printf("enter a three digit number : ");
    scanf("%d",&a);
    t=a;
    while(a>0)
    {
        p++;
        a/=10;
    }
    printf("Number of Digit = %d",p);
}
