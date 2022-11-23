#include <stdio.h>
#include <string.h>
void main()
{
    char a[500];
    printf("Enter a String : ");
    gets(a);
    printf("String in lowercase : ");
    puts(strlwr(a));
    printf("String in uppercase : ");
    puts(strupr(a)));

}
