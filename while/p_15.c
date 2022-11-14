#include <stdio.h>

void main()
{
    printf("RA221142010027\n");
    int a,p=1;
    printf("enter a number : ");
    scanf("%d",&a);
    while(a>0)
    {
        p*=(a%10);
        a/=10;
    }
    printf("Product = %d\n",p);
}
