#include <stdio.h>
#include <string.h>
int main()
{
    printf("RA2211042010027\n"); 
    char s[500];
    printf("Enter a string : ");
    gets(s);
    puts(s);
    printf("lower case %s",strlwr(s));
}
