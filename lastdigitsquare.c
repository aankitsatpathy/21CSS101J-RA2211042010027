/*last digits square*/
#include <stdio.h>

int main()
{
    printf("enter number");
    int a;
    scanf("%d",&a);
    int d=a%10;
    int sq=d*d;
    if(a==sq)
    {
        printf("last digits square is equal to the number");
    }
    else
    {
        printf("the number is not equal last digots square");
    }
}
/*output:
enter number25
last digits square is equal to the number
 */
