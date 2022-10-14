/*find week day*/
#include <stdio.h>

main()
{
    printf("RA2211042010027\n");
    printf("enter day number");
    int a;
    scanf("%d",&a);
    switch(a)
    {
        case 1:
         printf("monday");
         break;
        case 2:
         printf("tuesday");
         break;
        case 3: 
         printf("wednesday");
         break;
        case 4:
         printf("thursday");
         break;
        case 5:
         printf("friday");
         break;
        case 6:
         printf("saturday");
         break;
        case 7:
         printf("sunday");
         break;
        default:
         printf("not valid response");
         break;
    }
}

/*output:
enter day number6
saturday
*/
