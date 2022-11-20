#include <stdio.h>
void main()
{
    printf("RA2211042010027\n");
    int a[3];
    for(int i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    int l=a[0];
    for(int i=0;i<3;i++)
    {
       if(l<a[i])
       l=a[i];
    }
   printf("Largest = %d",l);
}
