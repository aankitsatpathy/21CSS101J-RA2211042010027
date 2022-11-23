#include <stdio.h>
#include <string.h>
void main()
{
    char a[500];
    printf("Enter a String : ");
    gets(a);
    printf("String in caps : ");
    puts(strupr(a));
}
