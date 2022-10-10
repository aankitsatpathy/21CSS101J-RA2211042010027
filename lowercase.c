/*lowercase*/
#include <stdio.h>
main()
{
    char ch;
    printf("Enter in uppercase: ");
    scanf("%c",&ch);
    int i;
    printf("lowercase of  %c : %c",ch,ch+32);
}
/*output:
Enter in uppercase: A
lowercase of  A : a
*/
