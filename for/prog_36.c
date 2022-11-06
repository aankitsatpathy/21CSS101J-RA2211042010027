#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("Enter a number = ");
    int a;
    scanf("%d",&a);
    for(;a>0;a/=10)
    {
        int d=a%10;
        if(a==3||a==1||a==5||a==7)
        printf("%d",a);
    }
}
