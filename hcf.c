/*hcf*/
#include<stdio.h>
main()
{  
    
    int a,b,c;
    printf("Enter two number");
    scanf("%d %d",&a,&b);
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
Enter two number25
50
hcf=25
*/
