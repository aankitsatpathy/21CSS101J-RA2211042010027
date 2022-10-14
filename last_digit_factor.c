/*check if last digit os the factor of 25*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter no.");
    int a;
    scanf("%d",&a);
    int d=a%10;
    if(25%d==0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}
/*output:
enter no.3456788885
true
 */
