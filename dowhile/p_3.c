#include <stdio.h>

void main()
{
    printf("RA2211042010027\n");
    printf("Enter a number");
    int n,i=0;
    scanf("%d",&n);
    do{
        if(i%2==0)
        printf("%d\n",i);
        i++;
    }while(i<=n);
}
