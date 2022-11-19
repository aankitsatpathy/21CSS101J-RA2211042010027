#include <stdio.h>

void main()
{
    printf("RA2211042010027\n");
    printf("Enter a number");
    int n,s=1;
    scanf("%d",&n);
    do{
        s*=(n%10);
        n/=10;
    }while(n>0);
    printf("Product = %d",s);
}
