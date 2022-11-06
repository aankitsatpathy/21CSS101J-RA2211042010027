
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("Enter a number = ");
    int a,r=0;
    scanf("%d",&a);
    for(;a>0;a/=10)
    r=r*10+(a%10);
    printf("Reverse = %d",r);
    
}
