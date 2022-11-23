#include <stdio.h>
char even(int a)
{
    if(a%2==0)
    {
        return "E";
    }
    return "O";
}
void main()
{
    printf("RA2211042010027\n"); 
    int n;
    scanf("%d",&n);
    printf("%c",even(n));
}
