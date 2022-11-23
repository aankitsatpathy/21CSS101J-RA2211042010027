#include <stdio.h>

void swap(int *a, int *b);


int main()
{
    printf("RA2211042010027\n"); 
    int A, B;
    scanf("%d %d", &A,&B);
    int *ptr1 = &A;
    int *ptr2 = &B;

    swap(&A,&B);

    printf("%d %d", A, B);
}

void swap(int*a, int*b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
