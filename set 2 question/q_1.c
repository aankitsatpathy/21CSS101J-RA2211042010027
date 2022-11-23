#include <stdio.h>

int main()
{
    printf("RA2211042010027\n"); 
    int N,M,K;
    printf("N: M: K:\n");
    scanf("%d %d %d", &N, &M, &K);

    if ((N+K)<=M )
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}
