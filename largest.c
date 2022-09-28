/*find largest number*/
#include<stdio.h>
main()
{
  int p,q,r;
  printf("enter 3 numbers\n");
  scanf("%d %d %d",&p,&q,&r);
  if(p>q)
  {
    if(p>r)
    {
      printf("largest is %d\n",p);
    }
    else
    {
     
      printf("largest is %d\n",r);
    }
  }
  else if(q>p)
  {
    if(q>r)
    {
      printf("largest is %d\n",q);
    }
    else
    {
      printf("largest is %d\n",r);
    }
  }
  else
  {
    printf("largest is %d\n",r);
  }
}

      
