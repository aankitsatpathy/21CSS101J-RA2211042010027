#include <stdio.h>

int main() {
    for(int a=5;a>0;a--)
    {
        int b;
        for(b=1;b<=a;b++)
        {
            printf("h");
        }
        for(int c=5-a;c>0;c--)
        {
            printf(" ");
        }
        for(int b=5-a;b>0;b--)
        {
            printf(" ");
        }
        for(int c=5;c>=(5-a);c--)
        {
            printf("h");
        }
        printf("\n");
    }
}
