/*pyramid 11*/
#include<stdio.h>
main()
{ 
    printf("RA2211042010027\n");
    int c=1;
    for(int a=1;a<=4;a++)
    {
        for(int b=1;b<5;b++)
        {
            if(b>(5-a))
            {
                printf("%d   ",c);
                c++;
            }
            else
            {
                printf("    ");
            }
        }
        
        printf("\n");
    }
}
/*output:
            1   
        2   3   
    4   5   6  
*/
