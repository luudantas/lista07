#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 16/5/26
*/
void preenche(int M[10][10])
{
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
            scanf("%d",&M[i][j]);
    }
}
void A(int M[10][10])
{
    int aux; 
    for(int k=0; k<10; k++) //troca a 2ª linha com a 8ª linha
    {
        aux = M[1][k];
        M[1][k] = M[7][k];
        M[7][k] = aux;
    }
}
void B(int M[10][10])
{
    int aux; 
    for(int k=0; k<10; k++) //troca a 4ª coluna com a 10ª coluna
    {
        aux = M[k][3];
        M[k][3] = M[k][9];
        M[k][9] = aux;
    }
}
void C(int M[10][10])
{
    int aux; 
    for(int i=0; i<10; i++)
    {
        aux = M[i][i];
        M[i][i] = M[i][9-i];
        M[i][9-i] = aux;
    } 
}
void D(int M[10][10])
{
    int aux; //auxiliar
    for(int k=0; k<10; k++) //troca a 5ª linha com a 10ª coluna
    {
        aux = M[4][k];
        M[4][k] = M[k][9];
        M[k][9] = aux;
    }
}
int main()
{
    int M[10][10];
    preenche(M);
    A(M);
    B(M);
    C(M);
    D(M);
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; j++)
        {
            if(j>0) printf(" ");
            printf("%d",M[i][j]);
        }
        printf("\n");
    }
    return 0;
}