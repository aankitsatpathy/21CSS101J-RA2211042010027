/*calculate the income tax*/
#include <stdio.h>

main()
{
    printf("RA2211042010027\n");
    printf("enter income");
    int a,p=0;
    scanf("%d",&a);
    if(a<=130000)
    {
        p=0;
    }
    else if(a>130000&&a<=200000)
    {
        p=p*15/100;
    }
    else
    {
        p=70000*15/100+(p-200000)*20/100;
    }
    printf("income tax=%d",p);
}
/*output:
enter income200001
income tax=-29500
*/
