/*find sum of digits*/
#include <stdio.h>

main()
{
    printf("RA2211042010027\n");
    int a;
    printf("enter a number");
    scanf("%d",&a);
    int b=a,c=0,sum=0;
    while(b>0)
    {
        b/=10;
        c++;
    }
    for(int d=0;d<c;d++)
    {
        sum+=(a%10);
        a/=10;
    }
    printf("sum of digits= %d",sum);
}
