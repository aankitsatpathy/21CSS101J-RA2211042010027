
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int a[100];
    int b=0,c=1,d;
    for(int f=0;f<100;f++)
    {
           d=b+c;
           a[f]=b;
           a[f+1]=c;
           a[f+2]=f;
           b=c;
           c=f;
    }
    int e,g=-1;
    scanf("%d",&e);
    for(int f=0;f<100;f++)
    if(e==a[f])
    g=f;
    printf("%d\n",g);
}
