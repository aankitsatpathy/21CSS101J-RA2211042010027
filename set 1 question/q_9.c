
#include <stdio.h>
void main()
{
    printf("RA2211042010027\n"); 
    int H,A;
    printf("Enter H,A : ");
    scanf("%d %d",&H,&A);
    int c=H/A;
    if(H%A!=0)
    {
       c++;
    }
    printf("Number of attack needed = %d\n",c);
}
