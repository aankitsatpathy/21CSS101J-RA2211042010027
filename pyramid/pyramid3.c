/*pyramid 3*/
#include<stdio.h>
main()
{ 
    int c=1;
    for(int a=1;a<5;a++)
    {
        for(int b=1;b<=a;b++)
        {
            printf("%d",c);
            c++;
        }
        printf("\n");
    }
}
/*output:
1
23
456
78910
*/
