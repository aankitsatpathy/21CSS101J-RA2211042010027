/*gross pay(gp=bp+bp*da)*/
#include<stdio.h>
main()
{
  float gp,da;
  int bp;
  printf("enter bp&da\n");
  scanf("%d %f",&bp,&da);
  gp=bp+(bp*da);
  printf("gross pay=%f",gp);
}
