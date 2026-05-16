#include <stdio.h>
#include <stdlib.h>
int main()
{
    int N;
    scanf("%d",&N);
    int *vet = (int *)malloc(N*sizeof(int));
    int *maior;
    for(int i=0; i<N; i++)
    {
        scanf("%d",(vet+i));
        if(i==0) maior = vet;
        else if(*(vet+i) >= *maior) maior = (vet+i);
    }
    printf("%d\n",*maior);
    free(vet);
    return 0;
}
