/*pyramid 5*/
#include<stdio.h>
main()
{ 
    printf("RA2211042010027\n");
    int c=1;
    for(int a=1;a<5;a++)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%d  ",c);
            c++;
        }
        printf("\n");
        c++;
    }
}
/*output:
1  
3  4  
6  7  8  
10  11  12  13
*/
