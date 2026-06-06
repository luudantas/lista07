#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autora: Luana Dantas
    Data: 16/5/26
    Objetivo: Permutação
*/

void troca(char *letra1, char *letra2) 
{
    char aux = *letra1;
    *letra1 = *letra2;
    *letra2 = aux;
}
void permuta(char *vetor, char *posicao, char *fim) 
{
    //caso base
    if (posicao == fim) //percorreu todas as letras
    {
        printf("%s ", vetor); 
        return;
    }
    //recursividade
    else
    {
    char *p = NULL;
    for (p = posicao; p <= fim; p++) //percorre todo o vetor 
    {
        // fixa a letra da posição atual em p
        troca(posicao, p);
        // passa para a proxima letra
        permuta(vetor, posicao + 1, fim);
        //retorna à organização original
        troca(posicao, p);
    }
}
}

int main() 
{
    char *vetor = (char*)malloc(30*sizeof(int));
    scanf(" %s",vetor);
    int tamanho = strlen(vetor);
    permuta(vetor, vetor, vetor + tamanho - 1); //inicio, primeira posicao, fim
    return 0;
}
