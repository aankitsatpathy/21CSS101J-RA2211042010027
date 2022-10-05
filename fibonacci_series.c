/*fibonacci series*/
#include <stdio.h>

main()
{
    printf("enter a number until which we will print fibonacci series");
    int n;
    scanf("%d",&n);
    int a=0,b=1,c;
    printf("%d\n %d\n",a,b);
    for(int d=0;d<=n;d++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
}
/*output:
enter a number until which we will print fibonacci series6
0
 1
1
2
3
5
8
13
21
*/
