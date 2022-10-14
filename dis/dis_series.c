/*display series 1,3,7,15,31....n*/
#include<stdio.h>
main()
{  
    printf("RA2211042010027\n");
    int n,a=1;
    printf("Enter the number");
    scanf("%d",&n);
    printf("%d\n",a);
    for(int d=2;a<n;d*=2)
    {
       a+=d;
       printf("%d\n",a);
    }
}
/*output:
Enter the number31
1
3
7
15
31
*/
