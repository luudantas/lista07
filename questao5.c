#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 16/05/26
*/
int somaLinha(int mat[5][5], int ln)
{
    int soma=0;
    for(int a=0; a<5; a++)
        soma += mat[ln][a];
    return soma;
}
int somaColuna(int mat[5][5], int col)
{
    int soma=0;
    for(int b=0; b<5; b++)
        soma += mat[b][col];
    return soma;
    
}
int somaDiagonalPrincipal(int mat[5][5])
{
   int soma=0;
    for(int c=0; c<5; c++)
    {
        for(int f=0; f<5; f++)
        if(c==f) soma += mat[c][f];
    } 
    return soma;
}
int somaDiagonalSec(int mat[5][5])
{
   int soma=0;
    for(int d=0; d<5; d++)
    {
        for(int g=0; g<5; g++)
        if((d+g)==4) soma += mat[d][g];
    } 
    return soma;
}
void preenche(int mat[5][5])
{
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        scanf("%d",&mat[i][j]); //preenche linha por linha
    }
}
int somaTotal(int mat[5][5])
{
    int soma=0;
    for(int e=0; e<5; e++)
    {
        for(int h=0; h<5; h++)
        soma += mat[e][h];
    }
    return soma;
}

int main()
{
    int M[5][5];
    preenche(M); //o parâmetro de preenche é um ponteiro para M
    int A = somaLinha(M,4); //a matriz começa em 0
    int B = somaColuna(M,2);
    int C = somaDiagonalPrincipal(M);
    int D = somaDiagonalSec(M);
    int E = somaTotal(M);
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("%d\n", D);
    printf("%d\n", E);
    return 0;
}