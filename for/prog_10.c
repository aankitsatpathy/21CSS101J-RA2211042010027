//product_series
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int s=1;
    for(int i=1;i<5;i++)
    s*=(i+(i+1));
    printf("%d\n",s);
}
