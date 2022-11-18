#include <stdio.h>
#include <math.h>
int main()
{
    printf("RA2211042010027");
    int a,c=0;
    scanf("%d",&a);
    int t=a,s=a*a;
    while(a>0)
    {
        c++;
        a/=10;
    }
    c=pow(10,c);
    if(t==(s%c))
    {
        printf("Automorphic numbers");
    }
    else
    {
        printf("Not Automorphic numbers");
    }
}
