#include <stdio.h>
int check(int a[],int n)
{
    int d=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                d=1;
                break;
            }
        }
    }
    return d;
}
int main()
{
    printf("RA2211042010027\n"); 
    printf("Enter number of input : ");
    int n;
    scanf("%d",&n);
    int a[n];
    printf("enter array elements : ");
    for (int i=0; i<n ;i++)
    {
        scanf("%d",&a[i]);
    }
    int d=0;
    d=check(a,n);
        if(d!=0)
        {
            printf("Not pairwise distinct");
        }
        else
        {
            printf("Pairwise Distinct");
        }
}
