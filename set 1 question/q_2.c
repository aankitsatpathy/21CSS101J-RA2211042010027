#include <stdio.h>

int main()
{
    printf("RA2211042010027\n"); 
    int a=0;
    printf("Enter age ");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not eligible");
    }
}
