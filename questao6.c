#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 16/5/26
*/
int main()
{
    int M[4][4], soma=0;
    //preenche a matriz
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
           scanf("%d",&M[i][j]);
    }
    //verifica os elementos ABAIXO da DP
    for(int a=1; a<4; a++)
    {
        for(int b=a; b>0; b--)
           soma+=M[a][a-b];
    }
    printf("%d\n",soma);
    //exibe os elementos da DP
    for(int m=0; m<4; m++)
    {
        for(int n=0; n<4; n++)
            if(m==n) printf("%d ",M[m][n]);
    } 
    return 0;
}