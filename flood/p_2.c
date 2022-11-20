#include <stdio.h>
int f(int a)
{
    if(a!=0)
    return 2;
    return 0;
}
void main()
{
    printf("RA2211042010027\n");
    int a[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        scanf("%d",&a[i][j]);
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]!=0)
            {
                if(j>0)
                {
                a[i][j-1]=f(a[i][j-1]);
                }
                a[i][j+1]=f(a[i][j+1]);
                if(i>0)
                {
                a[i-1][j]=f(a[i-1][j]);
                }
                a[i+1][j]=f(a[i+1][j]);
            }
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}
