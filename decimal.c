/*decimal number*/
#include <stdio.h>

int main()
{
    printf("enter number");
    int a,r=0;
    scanf("%d",&a);
    int b=a;
    while(b>0)
    {
        int d=b%10;
        if (d!=0||d!=1)
        {
            r++;
        }
        b/=10;
    }
    if(r!=0)
    {
        printf("not decimalnumber");
    }
    else
    {
        printf("decimal number");
    }
}
/*output:
enter number101012
not decimalnumber
 */
