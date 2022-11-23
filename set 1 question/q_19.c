#include <stdio.h>
void main()
{
    printf("RA2211042010027\n"); 
    printf("Enter bike number : ");
    int n,t,a=0;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        int d=n%10;
        if(d==1||d==0||d==2||d==3||d==5||d==8)
        {
            a++;
        }n/=10;
    }
    if(a>0)
    {
        printf("Bike Number has fibonacci number");
    }
