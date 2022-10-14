/*lcm*/
#include<stdio.h>
main()
{  
    printf("RA2211042010027\n");
    int a,b,c;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
    c=a*b;
    for(int d=1;d<c;d++)
    {
        if(d%a==0&&d%b==0)
        {
            c=d;
        }
    }
    printf("lcm=%d",c);
    c=1;
    for(int f=1;f<=a;f++)
    {
        if(a%f==0&&b%f==0)
        {
            c=f;
        }
    }
    printf("hcf=%d",c);
}
/*output:
Enter two number15
10
lcm=30hcf=5
*/
