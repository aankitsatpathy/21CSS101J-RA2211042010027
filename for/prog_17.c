//factor product
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int n1,s=1;
    scanf("%d",&n1);
    for(int a=1;a<n1;a++)
    if(n1%a==0)
    s*=a;
    printf("%d\n",s);
}
