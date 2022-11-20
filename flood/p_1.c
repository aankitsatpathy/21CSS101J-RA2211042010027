#include <stdio.h>
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
            a[i][j]=2;
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }
}
