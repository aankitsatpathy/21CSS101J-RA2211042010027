#include <stdio.h>
#include <string.h>
void main()
{
    char a[500],b[500];
    printf("String1 : ");
    gets(a);
    printf("String2 : ");
    gets(b);
    printf("String2 copied on String1 : ");
    strcpy(a,b);
    puts(a);
}
