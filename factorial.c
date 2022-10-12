/*find factorial*/
#include<stdio.h>
main()
{
    printf("RA2211042010027\n");
    int f=1;
    int b;
    printf("enter number whose factorial is to be found\n");
    scanf(" %d",&b);
  for (int a=1;a<=b;a++)
  {
      f*=a;
  }
  printf("factorial= %d",f);
}
