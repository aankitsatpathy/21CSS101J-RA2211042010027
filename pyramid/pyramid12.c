#include <stdio.h>

int main()
{
  printf("RA2211042010027");
    int n;
    printf("enter the number of terms");
    scanf("%d",&n);
    for(int a=1;a<=n;a+=2)
    {
        for(int b=0;b<=((n-a)/2)+a;b++)
        {
            if(b<=(n-a)/2)
            {
                printf(" ");
            }
            else
            {
                printf("%d",a);
            }
        }
        printf("\n");
    }
}
/*output
enter the number of terms9
     1
    333
   55555
  7777777
 999999999
 */
