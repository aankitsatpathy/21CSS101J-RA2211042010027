//fibonacci_series
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int a=0,b=1,c,n,s=a+b;
    scanf("%d",&n);
    for(c=a+b;c<n;c=a+b)
    {
        s+=c;
        a=b;
        b=c;
    }
    printf("%d",s);
}
