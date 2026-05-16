#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 16/5/26
    Objetivo : Ordenação sequencial
*/
int main()
{
    int N, temp;
    int *aux; 
    scanf("%d",&N);
    int *vet = (int *)malloc(N*sizeof(int));
    //leitura dos valores do vetor
    for(int k=0; k<N; k++)
        scanf("%d",(vet+k));
    //ordenação sequencial
    for(int i=0; i<N-1; i++)
    {
        aux = (vet+i);
        //confere o resto do vetor
        for(int j=i+1; j<N; j++)
        {
            if(*(vet+j)<*aux) aux = (vet+j);
        }
        if(aux != (vet+i)) //troca as posições
        {
            temp = *aux;
            *aux = *(vet+i);
            *(vet+i) = temp;
        }
    }
    //exibe o vetor ordenado
    for(int k=0; k<N; k++)
        printf("%d ",*(vet+k));
    return 0;
}