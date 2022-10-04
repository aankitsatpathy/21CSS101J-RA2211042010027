/*consequetive alphabets*/
#include <stdio.h>

int main()
{
    printf("enter character");
    int a,b;
    scanf("%c %c",&b,&a);
    if(b==a+1||a==b+1)
    {
        printf(" consequtive alphabets");
    }
    else
    {
        printf(" non consequtive alphabets");
    }
}
/*output:
enter characterhy
 non consequtive alphabets
 */
