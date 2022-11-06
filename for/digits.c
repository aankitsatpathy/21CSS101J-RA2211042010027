#include <stdio.h>

int main()
{
    printf("RA2211042010027");
    int a;
    scanf("%d",&a);
    for(;a>0;a/=10)
        printf("%d\n",a%10);
    
}
