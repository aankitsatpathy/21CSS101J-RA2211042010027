/*common factor*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter3number");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    for(int d=0;d>a;d++)
    {
        if(a%d==0&&b%d==0&&c%d==0)
        {
            printf("%d",d);
        }
    }
}
