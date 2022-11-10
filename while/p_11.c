
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int n,a=1;
    scanf("%d",&n);
    while(a<=n)
    {
       if(a%5==0)
       continue;
       printf("%d\n",a);
       a++;
    }
}
