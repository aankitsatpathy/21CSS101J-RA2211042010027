/*covert into years,month,day*/
#include <stdio.h>

int main()
{
    printf("enter a time in days");
    int y,m,d;
    scanf(" %d",&d);
    y=d/365;
    d%=365;
    m=d/30;
    d%=10;
    printf("no. of the year= %d\n no.of month= %d\n no. of days=%d\n",y,m,d);
}
/*output:
enter a time in days600
no. of the year= 1
 no.of month= 7
 no. of days=5*/
