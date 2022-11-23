#include <stdio.h>
void add(int a,int b)
{
    printf("%d+%d=%d",a,b,a+b);
}
void main()
{
    printf("RA2211042010027\n");    
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    add(n1,n2);
}
