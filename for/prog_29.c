#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("Enter three digit number = ");
    int a,s=0;
    scanf("%d",&a);
    for(;a>0;a/=10){
        s++;
    }
    
    printf("%d",s);
}
