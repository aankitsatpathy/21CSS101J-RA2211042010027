#include <stdio.h>

void main()
{
    printf("RA2211042010027\n");
    printf("Enter a number");
    int n;
    scanf("%d",&n);
     int s=n;  
    do
    {
        n=s;
        s=0;
        for(;n>0;n/=10)
        {
            s+=(n%10);
        }
        
    }  while(s>10)
   if(s==1)
       printf("Magic Number");
    else
        printf("Not Magic Number");
}
