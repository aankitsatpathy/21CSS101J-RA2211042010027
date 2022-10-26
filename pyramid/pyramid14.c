#include <stdio.h>

int main()
{
    int n;
  printf("RA2211042010027");
    printf("enter the number of terms");
    scanf("%d",&n);
    int c=0;
    for(int a=1;a<n;a++)
    {
        for(int b=a;b>0;b--)
        {
            printf("%d",b);
        }
        printf("\n");
        c++;
    }
}
/*output
1
21
321
4321
 */

