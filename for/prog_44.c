#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int a,b,fa=0,fb=0;
    scanf("%d %d",&a,&b);
    for(int f=1;f<a;f++)
    {
            if(a%f==0)
            fa+=f;
            if(b%f==0)
            fb+=f;
    }
    if(fa==b&&fb==a)
    {
        printf("Amicable Numbers");
    }
    else
    {
        printf("Not Amicable Numbers ");
    }
}
