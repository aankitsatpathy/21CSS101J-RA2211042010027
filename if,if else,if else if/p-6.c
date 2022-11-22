#include <stdio.h>

int main()
{
    printf("Enter Bid(Math,Physics,Chemistry) : ");
    int a,b,c,*d=&a,*e=&b,*f=&c;
    scanf("%d %d %d",&a,&b,&c);
    if(*d>b&&*d>c)
    {
        printf("Math");
    }
    if(*e>a&&*e>c)
    {
        printf("Physics");
    }
    if(*f>a&&*f>b)
    {
        printf("Chemistry");
    }
}
