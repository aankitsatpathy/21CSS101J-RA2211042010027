/*pyramid 2*/
#include<stdio.h>
main()
{ 
    printf("RA2211042010027\n");
    for(int a=1;a<6;a++)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%d",a);
        }
        printf("\n");
    }
}
/*output:
1
22
333
4444
55555
*/
