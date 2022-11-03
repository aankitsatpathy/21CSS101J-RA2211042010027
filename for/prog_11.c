//fibonacci_series
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int a=0,b=1,c,n;
    scanf("%d",&n);
    printf("%d,",a);
    printf("%d,",b);
    for(c=a+b;c<n;c=a+b)
    {
        printf("%d,",c);
        a=b;
        b=c;
    }
}
