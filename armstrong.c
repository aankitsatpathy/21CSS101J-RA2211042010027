/*triangle check*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter anumbers");
    int a;
    scanf("%d",&a);
    int b=a,c=a,e=0;
    while(b>0)
    {
      int d=b%10;
      b/=10;
      e+=d*d;
    }
    if(a==c)
    {
        printf("armstrong number");
    }
    else
    {
        printf("not a armstrong numbers");
    }
}
/*output:
enter anumbers9474
armstrong number
 */
