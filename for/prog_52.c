#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int a,b,ca=0,cb=0;
    scanf("%d",&a);
    b=a+2;
    for(int f=1;f<=b;f++)
    {
            if(a%f==0)
            ca++;
            if(b%f==0)
            cb++;
    }
    if(ca==2&&cb==2)
    {
        float bc=(1.0/a)+(1.0/b);
        printf("Bruno Constant = %f\n",bc);
    }
    else
    printf("Bruno Constant not posible\n");
}
