#include <stdio.h>
#include <string.h>
int main()
{
    char s[500];
    printf("Enter a string : ");
    gets(s);
    puts(s);
    printf("lower case %s",strlwr(s));
}
