/*gross pay(gp=bp+bp*da)*/
#include<stdio.h>
main()
{
  printf("RA2211042010027\n");
  float gp,da;
  int bp;
  printf("enter bp&da\n");
  scanf("%d %f",&bp,&da);
  gp=bp+(bp*da)/100.0;
  printf("gross pay=%f",gp);
}
