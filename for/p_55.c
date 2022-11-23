#include <stdio.h>
int main()
{
    printf("RA2211042010027\n"); 
    char str[100];
    int i,length=0;
    printf("Enter a string: \n");
    gets(str);
    for(i=0; str[i]!='\0'; i++)
    {
        length++; 
    }
    printf("\nLength of input string: %d",length);
}
    
