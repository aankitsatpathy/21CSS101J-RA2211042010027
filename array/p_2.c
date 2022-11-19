#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int s=0,a[10];
    for(int i=0;i<10;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<10;i++)
    s+=a[i];
    printf("Sum = %d",s);
}
