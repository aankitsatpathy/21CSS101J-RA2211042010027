#include <stdio.h>

void main()
{
    printf("RA2211042010027\n");
    printf("Enter a number");
    int n,s=1,i=1;
    scanf("%d",&n);
    do{
        s*=i;
        i++;
    }while(i<=n);
    printf("Product = %d",s);
}
