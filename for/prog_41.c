#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("Enter a number = ");
    int a,r=9;
    scanf("%d",&a);
    for(;a>0;a/=10){
    int d=a%10;
    if(d<r)
    r=d;}
    printf("Smallest digit = %d",r);
    
}
