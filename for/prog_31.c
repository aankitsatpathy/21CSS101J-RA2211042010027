#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("Enter a number = ");
    int a,s=0;
    scanf("%d",&a);
    for(;a>0;a/=10)
    if(a%2!=0)
    printf("%d\n",a%10);
}
