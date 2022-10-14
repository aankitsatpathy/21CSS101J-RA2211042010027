/*find average height of class*/
#include <stdio.h>

main()
{
  printf("RA2211042010027\n");
  float sum=0,height[10];
  printf("enter height of 10 students");
  for(int a=0;a<10;a++)
  {
      scanf(" %f", &height[a]);
  }
  for (int a=0;a<10;a++)
  {
      sum+=height[a];
  }
  float avg=sum/10;
  printf("average %f", avg);
}
