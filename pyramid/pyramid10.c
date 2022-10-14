/*pyramid 10*/
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
                printf("%d ",a);
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
        1 
      2 2 
    3 3 3 
  4 4 4 4 
5 5 5 5 5
*/
