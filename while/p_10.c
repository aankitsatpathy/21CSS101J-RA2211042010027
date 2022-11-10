
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int n,a=1;
    scanf("%d",&n);
    while(a<n)
    {
       if(a%7==0)
       printf("%d\n",a);
       a++;
    }
}
