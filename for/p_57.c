#include <stdio.h>

int main()
{
   printf("RA2211042010027\n");  
    int l,r;
    printf("Enter l & r: ");
    scanf("%d %d",&l,&r);
    for(int i=l;i>=r;i++)
    {
        int d=i%10;
        if(d==2||d==3||d==9)
        printf("%d",i);
    }
}
