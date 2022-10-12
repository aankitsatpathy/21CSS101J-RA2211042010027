/*find if player is all rounder, batsman , bowler*/
#include <stdio.h>

main()
{
    printf("RA2211042010027\n");
    printf("enter average runs, average wickets");
    int r,w;
    scanf("%d %d",&r,&w);
    if(r>40&&w>3)
    {
        printf("all rounder");
    }
    else if(r>50)
    {
        printf("batsman");
    }
    else if (w>4)
    {
        printf("bowler");
    }
    else 
    {
        printf(" not fit");
    }
}
/*output:
enter average runs, average wickets56  
2
batsman
*/
