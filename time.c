/* timearranger*/
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("enter time in seconds");
    int h,m,s;
    scanf("%d",&s);
    h=s/3600;
    s%=3600;
    m=s/60;
    s%=60;
    printf("hours=%d\n minutes%d\n seconds%d\n",h,m,s);
}
/*output:
enter time in seconds7478
hours=2
 minutes4
 seconds38
 */
