#include <stdio.h>
void main()
{
    printf("RA2211042010027\n"); 
    int a;
    float c=0;
    printf("Enter a : ");
    scanf("%d ",&a);
    int b=a>250?1:a>150?2:a>50?3:4;
    switch(b)
    {
        case 1:
        c+=(a-250)*1.5;
        a=250;
        case 2:
        c+=(a-150)*1.2;
        a=150;
        case 3:
        c+=(a-50)*0.75;
        case 4:
        c+=a*0.75;
    }
    if(c>300)
    {
        c+=(c*0.1);
    }
   printf("Cost = %f\n",c);
}
