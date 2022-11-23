#include <stdio.h>

int main()
{
    printf("RA2211042010027\n"); 
    int n;
    printf("Enter the number of rows : ");
    scanf("%d", &n );

    for (int i = n; i > 0  ; i--)
    {
        for (int j = i; j > 0; j--)
    {
        printf("%d\t", i);
    }
    printf("\n");
    }
}
