#include <stdio.h>

int main() {
   int sal;
   float tax;
   scanf("%d",&sal);
   if(sal<=180000)
   {
       tax=sal*0.08;
   }
   else if(sal>180000&&sal<500000)
   {
       tax=(180000*0.08)+(sal-500000)*0.16;
   }
   else
   {
       tax=(180000*0.08)+(320000*0.16)+((sal-500000)*0.33);
   }
   printf("tax = %d",tax)l
    return 0;
}
