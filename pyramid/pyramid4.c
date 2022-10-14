/*pyramid 4*/
#include<stdio.h>
main()
{ 
    printf("RA2211042010027\n");
    int c=1;
    for(int a=1;a<5;a++)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%d",c);
        }
        printf("\n");
        c+=2;
    }
}
/*output:
1
33
555
7777
*/
