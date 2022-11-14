
#include <stdio.h>

void main()
{
    printf("RA221142010027\n");
    int a,s=0;
    printf("enter a number : ");
    scanf("%d",&a);
    while(a>0)
    {
        s+=(a%10);
        a/=10;
    }
    printf("Sum = %d\n",s);
}
