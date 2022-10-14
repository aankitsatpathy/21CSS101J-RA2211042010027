/*karpekar number*/
#include<stdio.h>
main()
{  
    printf("RA2211042010027\n");
    int n;  
    printf("Enter the number");
    scanf("%d",&n);
    int a=n,c=0;
    while(n>0)
    {
        c++;
        n/=10;
    }
    int p=(10,n-1);
    int sq=n*n;
    int r=(sq/p)+(sq%p);
    if(r==n)
    {
        printf("karpekar number");
    }
    else
    {
        printf(" not karpekar number");
    }
}
/*output:
Enter the number297
karpekar number
*/
