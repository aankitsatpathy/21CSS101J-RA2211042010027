
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int a,s=1;
    scanf("%d",&a);
    for(;a>0;a/=10)
    s*=(a%10);
    printf("%d\n",s);
    
}
