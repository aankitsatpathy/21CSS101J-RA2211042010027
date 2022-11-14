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
        p+=pow((a%10),3);
        a/=10;
    }
    if(t==p)
    printf("Armstrong Number");
    else
    printf("Not an Armstrong Number");
}
