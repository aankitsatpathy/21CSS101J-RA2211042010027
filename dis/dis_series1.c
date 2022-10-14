/*display series 1,2,3,4,5,6,7.......nterms*/
#include<stdio.h>
main()
{  
    printf("RA2211042010027\n");
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    for(int d=1;d<n;d++)
    {
           printf("%d\n",d*d);
    }
}
/*output:
Enter the number5 
1
2
3
4
5
*/
