#include <stdio.h>

int main()
{
    printf("RA2211042010027\n"); 
    int n,c=0,d=0;
    printf("Enter n : ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=a[0],pos=0;
    for(int i=1;i<n;i++)
    {
       if(a[i]>l)
       {
           l=a[i];
       }
    }
    printf("Highest mark = %d\n",l);
    a[pos]=-1;
    l=a[0];
    for(int i=1;i<n;i++)
    {
       if(a[i]>l)
       {
           l=a[i];
       }
    }
   printf("Second highest mark = %d",l);
}
