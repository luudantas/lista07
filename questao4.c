#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int N, maior;
    scanf("%d",&N);
    int *vet = (int *)malloc(N*sizeof(int));
    for(int i=0,i<N;i++)
    {
        scanf("%d",vet[i]);
        if(i==0) maior = vet[0];
        else
    }
    free(vet);
    return 0;
}
