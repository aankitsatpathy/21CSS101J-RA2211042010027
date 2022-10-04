/*largestnumber*/
#include <stdio.h>

int main()
{
    printf("enter number");
    int a,m=0,d,r=0;
    scanf("%d",&a);
    int b=a,c=a;
    while(b>0)
    {
        while(c>0)
        {
          d=c%10;
          if(m<d)
          {
              m=d;
             printf("%d\n",m);
          }
          c/=10;
          printf("%d\n",c);
        }
        b/=10;
        r=r*10+m;
        m=0;
        printf("%d\n",r);
    }
    printf("largest posible number%d",r);
}
