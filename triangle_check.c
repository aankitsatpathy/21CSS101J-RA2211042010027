/*triangle check*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter three numbers");
    int a,b,c;
    scanf("%d %d %d",&b,&a,&c);
    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        printf("triangle posible");
    }
    else
    {
        printf("not a triangle");
    }
}
/*output:
enter three numbers3
4
5
triangle posible
 */
