#include <stdio.h>

int main()
{
    printf("RA2211042010027");
    int n;
    printf("enter the number of terms");
    scanf("%d",&n);
    int c=0;
    for(int a=n;a>0;a--)
    {
        for(int b=0;b<=c;b++)
        {
            printf("%d",a);
        }
        printf("\n");
        c++;
    }
}
/*output
enter the number of terms9
9
88
777
6666
55555
444444
3333333
22222222
111111111
 */
