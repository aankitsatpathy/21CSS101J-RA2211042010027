/*if the first digits and last digit number then add else multiply them*/
#include <stdio.h>

int main()
{
    printf("enter a three digits");
    int a;
    scanf("%d",&a);
    int f=a/100,l=a%10;
    if(f%2==0&&l%2==0)
    {
        printf("%d",f+l);
    }
    else
    {
        printf("%d",f*l);
    }
}
/*output:
enter a three digits345
15
 */
