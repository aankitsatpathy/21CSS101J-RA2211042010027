/*using loop to find m power n*/
#include<stdio.h>
main()
{
  int m,n;
  int sq=1;
  printf("enter m and n\n");
  scanf("%d %d",&m,&n);
  for(int a=0;a<n;a++)
  {
      sq=sq*m;
      printf(" %d",sq);
  }
  printf("m power n is= %d", sq);
}
  
