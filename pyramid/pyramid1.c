/*pyramid 1*/
#include<stdio.h>
main()
{ 
    for(int a=1;a<6;a++)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%d",b);
        }
        printf("\n");
    }
}
/*output:
1
12
123
1234
12345
*/
