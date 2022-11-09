
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int a,b,fa=0,fb=0;
    scanf("%d",&a);
    b=a+2;
    int c=a>b?a:b;
    for(int f=1;f<=c;f++)
    {
            if(a%f==0)
            fa++;
            if(b%f==0)
            fb++;
    }
    if(fa==2&&fb==2)
    {
        printf("Twin Prime ");
    }
    else
    {
        printf("Not Twin Prime ");
    }
}
