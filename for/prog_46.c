#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int a,fa=0;
    scanf("%d",&a);
    for(int f=1;f<a;f++)
    {
            if(a%f==0)
            fa+=f;
    }
    if(fa==a)
    {
        printf("Perfect Number");
    }
    else
    {
        printf("Not Perfect Number");
    }
}
