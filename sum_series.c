/*sum of square until n*/
#include<stdio.h>
main()
{  
    printf("RA2211042010027\n");
    int n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(int a=0;a>n;a++)
    {
        sum+=a*a;
    }
    printf("sum=%d",sum);
}
