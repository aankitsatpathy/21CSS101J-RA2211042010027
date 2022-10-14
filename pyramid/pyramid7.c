/*pyramid 7*/
#include<stdio.h>
main()
{ 
    printf("RA2211042010027\n");
    for(int a=5;a>0;a--)
    {
        for(int b=5;b>=a;b--)
        {
            printf("%d  ",a);
        }
        printf("\n");
    }
}
/*output:
5  
4  4  
3  3  3  
2  2  2  2  
1  1  1  1  1   
*/
