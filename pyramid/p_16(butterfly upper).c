#include <stdio.h>

int main() {
    for(int a=1;a<=5;a++)
    {
        int d;
        for( d=1;d<=a;d++)
    {
        printf("%d",d);
    }
    for(int e=5-a;e>0;e--)
    {
        printf(" ");
    }
        for(int b=5-a;b>0;b--)
        {
            printf(" ");
        }
        for(int c=1;c<=a;c++)
        {
            printf("%d",c);
        }
        printf("\n");
    }
}
