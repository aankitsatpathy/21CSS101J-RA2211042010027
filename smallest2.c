/*smallest number*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter3number");
    int a,b,c;
    scanf("%d %d %d",&b,&a,&c);
    if(a<b&&a<c)
    {
        printf("smallest is=%d",a);
    }
   else if(b<a&&b<c)
   {
       printf("smallest is=%d",b);
   }
   else
   {
       printf("smallest is=%d",c);
   }
}
/*output:
enter3number32
23
12
smallest is=1
 */
