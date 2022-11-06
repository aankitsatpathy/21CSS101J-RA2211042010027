#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("Enter a number = ");
    int a,r=0;
    scanf("%d",&a);
    for(;a>0;a/=10){
    int d=a%10;
    if(d>r)
    r=d;}
    printf("Largest digit = %d",r);
    
}
