#include <stdio.h>

void main()
{
    printf("RA221142010027\n");
    int a;
    printf("enter a number : ");
    scanf("%d",&a);
    while(a>0)
    {
        printf("%d\n",a%10);
        a/=10;
    }
}
