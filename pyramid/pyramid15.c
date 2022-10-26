#include <stdio.h>

int main()
{
  printf("RA2211042010027");
    int n;
    printf("enter the number of terms");
    scanf("%d",&n);
    int c=1;
    for(int a=1;a<n;a++)
    {
        for(int b=1;b<=c;b++)
        {
            printf("%d",b);
        }
        printf("\n");
        c+=2;
    }
}
/*output
1
123
12345
1234567
 */

