/*pyramid 8*/
#include<stdio.h>
main()
{ 
    printf("RA2211042010027\n");
    int c=1;
    for(int a=5;a>0;a--)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%d  ",c);
            c++;
        }
        printf("\n");
    }
}
/*output:
1  2  3  4  5  
6  7  8  9  
10  11  12  
13  14  
15  
*/
