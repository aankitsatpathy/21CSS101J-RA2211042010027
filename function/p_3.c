#include <stdio.h>
void swap(int a,int b)
{
    int t=a;
    a=b;
    b=t;
    printf("%d %d",a,b);
}
void main()
{
    printf("RA2211042010027\n"); 
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    swap(n1,n2);
}
