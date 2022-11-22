#include <stdio.h>

int main()
{
    printf("Enter X Y : ");
    int a,b,*c=&a,*h=&b;
    scanf("%d %d",&a,&b);
    if(*c>*h)
    {
        printf("First");
    }
    else if(*c<*h)
    {
        printf("Second");
    }
    else
    {
        printf("Any");
    }
