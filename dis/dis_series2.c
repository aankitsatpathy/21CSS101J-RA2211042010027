/*display series 1,4,27,16,125..nterms*/
#include<stdio.h>
main()
{  
    
    int n,a=1;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d\n",a);
    for(int d=1;d<n;d++)
    {
       if(d%2==0)
       {
           printf("%d\n",d*d);
       }
       else
       {
           printf("%d\n",d*d*d);
       }
    }
}
/*output:
Enter the number5 
1
1
4
27
16
*/
