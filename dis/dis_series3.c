/*display series 1,12,123,1234,12345....n*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int n;
    printf("enter a number of terms");
    scanf("%d",&n);
    int a=0;
    for(int b=1;b<=n;b++)
    {
        a=a*10+b;
        printf("%d,",a);
    }
}
/*output:
enter a number of terms5
1,12,123,1234,12345,
*/
