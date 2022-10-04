/*divisiblity by n*/
#include <stdio.h>

int main()
{
    printf("enter number");
    int a;
    scanf("%d",&a);
    printf("enter number to be divide");
    int n;
    scanf("%d",&n);
    if(a%n==0)
    {
        printf("divisible by%d",n);
    }
    else
    {
        printf("not divisible by%d",n);
    }
}
/*output:
enter number54
enter number to be divide9
divisible by9
 */
