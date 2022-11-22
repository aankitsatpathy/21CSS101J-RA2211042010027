#include <stdio.h>

int main()
{
    printf("Enter Bid(Alice,Bob,Charlie) : ");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)
    {
        printf("Alice");
    }
    if(b>a&&b>c)
    {
        printf("Bob");
    }
    if(c>a&&c>b)
    {
        printf("Charlie");
    }
}
