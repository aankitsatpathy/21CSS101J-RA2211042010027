
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int a,b;
    scanf("%d %d",&a,&b);
    for(int f=1;f<=a;f++)
    {
            if(a%f==0&&b%f==0)
            {
                printf("%d\n",f);
            }
    }
}
