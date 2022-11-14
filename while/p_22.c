#include <stdio.h>
void main()
{
    printf("RA221142010027\n");
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    int r=a%10,ra=a%10;
    while(a>0)
    {
        int d=a%10;
        if(r>d)
        r=d;
        if(ra<d)
        ra=d;
        a/=10;
    }
    printf("Sum of largest and lowest digit = %d",r+ra);
}
