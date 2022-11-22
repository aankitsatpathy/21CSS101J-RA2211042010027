#include <stdio.h>
int main (){
    int fair,balance=5000,people,total;
    printf("enter how many people are there");
    scanf("%d",&people);
    printf("Enter fair : ");
    scanf("%d",&fair);
    total=fair*people;
    if (total>balance){
        total=total-balance;
        printf("shajith has to pay balance %d\n",total);
    }
   else {
       total=balance-total;
       printf("shajith has a balance of rupees %d\n",total);
    }
    return 0;
}
