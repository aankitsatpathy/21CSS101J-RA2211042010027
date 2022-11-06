
#include <stdio.h>
#include <math.h>
int main()
{
    printf("RA2211042010027\n");
    printf("Enter a number = ");
    int t,a,c=0;
    scanf("%d",&a);t=a;
    for(;a>0;a/=10){
    c++;}
    int p=pow(10,--c);
    ++c;
    for(int i=0;i<c;i++,p/=10)
    printf("%d\n",t/p);
    
}
