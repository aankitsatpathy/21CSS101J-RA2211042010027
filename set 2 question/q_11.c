#include <stdio.h>

int main()
{
    char fname[100],lname[100];
    printf("Enter Fname and Lname");
    puts(fname);
    puts(lname);
    int l=strlen(fname),f=strlen(lname);
    strcat(fname,lname);
   printf("First name length = %d\nSecond name length =%d\nFull name = ",l,f);
   puts(fname);
   
} 
