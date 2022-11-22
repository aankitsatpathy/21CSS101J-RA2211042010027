#include <stdio.h>

int main()
{
    int a;
    char s[5],t[5],m[5];
    printf("Enter 2 string : ");
    gets(s);
    gets(t);
    for(int i=0;i<5;i++){
        if(s[i]==t[i])
        {
            m[i]='G';
        }
        else
        {
            m[i]='B';
        }
    }
    puts(s);
    printf("\n");
    puts(t);
    printf("\n");
    puts(m);
}
