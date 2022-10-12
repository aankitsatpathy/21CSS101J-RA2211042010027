/*add 1 to digits of an integer*/
#include <stdio.h>

main()
{
    printf("RA2211042010027\n");
    printf("enter a number");
    int b;
    scanf(" %d",b);
    int ni=0;
    while(b>0)
    {
        int d=b%10;
        printf("k");
        if(d==9)
        {
            ni=ni*10;
            printf("%d",ni);
        }
        else
        {
            ni=ni*10+d;
            printf("%d",ni);
        }
    }
    printf("new integer=%d",ni);
}
