//QUESTION 4
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n"); 
    int n,x,y;
    printf("Enter N,X,Y : ");
    scanf("%d %d %d",&n,&x,&y);
    if(y%x==0&&y<=(n*x))
    {
    printf("YES");
    }
    else
    {
    printf("NO");
    }
}
