#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("Enter a number = ");
    int c=0,a,s=0;
    scanf("%d",&a);
    for(;a>0;a/=10)
    if(a%2!=0){c++;
    s+=a%10;}
    float sc=s/c;
    printf("SAverage of odd digits = %f",sc);
}
