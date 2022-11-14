
#include <stdio.h>
#include <math.h>
void main()
{
    printf("RA221142010027\n");
    int a,p=0;
    printf("enter a number : ");
    scanf("%d",&a);
    while(a>0)
    {
        p+=pow((a%10),3);
        a/=10;
    }
    printf("Sum of cubes = %d\n",p);
}
