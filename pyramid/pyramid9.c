/*pyramid 9*/
#include<stdio.h>
main()
{ 
    printf("RA2211042010027\n");
    for(int a=1;a<=5;a++)
    {
        for(int b=1;b<6;b++)
        {
            if(b>(5-a))
            {
                printf("%d ",b);
            }
            else
            {
                printf("  ");
            }
        }
        
        printf("\n");
    }
}
/*output:
        5 
      4 5 
    3 4 5 
  2 3 4 5 
1 2 3 4 5 
*/
