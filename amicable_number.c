/*amicable number*/
#include<stdio.h>
main()
{  
    
    int a,b;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    int sum1,sum2;
    for(int f=1;f<a;f++)
    {
        if(a%f==0)
        {
            sum1+=f;
        }
    }
    for(int f=1;f<a;f++)
    {
        if(b%f==0)
        {
            sum2+=f;
        }
    }
    if(sum1==b&&sum2==a)
    {
        printf("amicable number");
    }
    else
    {
        printf(" not amicable number");
    }
}
/*output:
Enter two number23
25
 not amicable number
*/
