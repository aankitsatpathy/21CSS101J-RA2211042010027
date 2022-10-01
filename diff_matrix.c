/*find difference of matrix*/
#include <stdio.h>

main()
{
  int a,b;
  printf("enter number of rows and column");
  scanf(" %d %d", &a,&b);
  int A[a][b],B[a][b],dif[a][b];
  printf("enter elements of A\n");
  for(int i=0;i<a;i++)
  {
      for(int j=0;j<b;j++)
      {
          printf("enter element %d %d", i+1,j+1);
          scanf(" %d", &A[i][j]);
      }
  }
   printf("enter elements of B\n");
  for(int i=0;i<a;i++)
  {
      for(int j=0;j<b;j++)
      {
          printf("enter element %d %d",i+1,j+1);
          scanf(" %d", &B[i][j]);
      }
  }
  for(int i=0;i<a;i++)
  {
      for(int j=0;j<b;j++)
      {
          dif[i][j]=A[i][j]-B[i][j];
      }
  }
  for(int i=0;i<a;i++)
  {
      for(int j=0;j<b;j++)
      {
          printf("element %d %d of difference= %d\n",i+1,j+1,dif[i][j]);
      }
  }
}
