#include <stdio.h>

int main()
{
    int a,b,s;
    printf("Enter a,b : ");
    scanf("%d %d",&a,&b);
     int *ptr1=&a,*ptr2=&b;
    s=*ptr1+*ptr2;
    printf("Sum = %d",s);
}
