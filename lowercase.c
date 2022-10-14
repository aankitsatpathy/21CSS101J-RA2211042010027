/*lowercase*/
#include <stdio.h>
main()
{
    printf("RA2211042010027\n");
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
