//lcm
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    int n1,n2,h=1;
    scanf("%d %d",&n1,&n2);
    for(int a=n1;;a++)
        if(a%n1==0&&a%n2==0){
        h=a;break;}
    printf("HCF = %d\n",h);
}
