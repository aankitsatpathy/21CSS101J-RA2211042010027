
#include <stdio.h>
#include <string.h>
void main()
{
    char a[500],b[500];
    printf("String1 : ");
    gets(a);
    printf("String2 : ");
    gets(b);
    printf("String1 String2 compared: ");
    int c=strcmp(a,b);
    printf("%d",c);
}
