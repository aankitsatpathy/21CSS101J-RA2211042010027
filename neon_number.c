/*neon number*/
#include <stdio.h>

main()
{
    printf("RA2211042010027\n");
    printf("enter a number");
    int b;
    scanf("%d",&b);
    int sq=b*b;
    int sum=0;
    while(sq>0)
    {
        sum+=sq%10;
        sq/=10;
    }
    if(sum==b)
    {
        printf("neon number");
    }
    else
    {
        printf(" not a neon number");
    }
}
/*output:
enter a number9
neon number
*/
