#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int c=0,a,s=0;
    scanf("%d",&a);
    for(;a>0;a/=10,c++)
    s+=a%10;
    double as=s/c;
    printf("%f\n",as);
    
}
