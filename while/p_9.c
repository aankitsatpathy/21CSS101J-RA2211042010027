#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int n,a=1,s=0;
    scanf("%d",&n);
    while(a<n)
    {
       s+=a;
       a++;
    }
    printf("%d",s/n);
}
