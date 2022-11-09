
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int a,e=0,o=0;
    scanf("%d",&a);
    for(int f=1;f<=a;f++)
    {
            if(a%f==0)
            {
                if(f%2==0)
                e+=f;
                else
                o+=f;
            }
    }
    printf("Sum of even = %d\n",e);
    printf("Sum of odd = %d\n",o);
}
