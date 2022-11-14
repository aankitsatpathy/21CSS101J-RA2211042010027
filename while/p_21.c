#include <stdio.h>
void main()
{
    printf("RA221142010027\n");
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    int r=a%10;
    while(a>0)
    {
        int d=a%10;
        if(r>d)
        r=d;
        a/=10;
    }
    printf("Smallest Digit = %d",r);
}
