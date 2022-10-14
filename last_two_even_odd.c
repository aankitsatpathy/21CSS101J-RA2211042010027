/*check if last2digitsare odd or even*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter no.");
    int a;
    scanf("%d",&a);
    int d=a%100;
    if(d%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
/*output:
enter no.987654
even
 */
