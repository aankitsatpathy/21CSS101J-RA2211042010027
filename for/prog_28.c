
#include <stdio.h>

int main()
{
    printf("RA2211042010027\n");
    printf("Enter three digit number = ");
    int t,a,s=0;
    scanf("%d",&a);
    t=a;
    for(;a>0;a/=10){
        int d=a%10;
        s+=d*d*d;
    }\
    if(t==s)
    printf("Armstorng number");
    else
    printf("Not armstorng number");
}
