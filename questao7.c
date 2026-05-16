#include <stdio.h>
#include <stdlib.h>
void preenche(int A[4][6], int B[4][6])
{
    //preenche A
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
            scanf("%d",&A[i][j]);
    }
    //preenche B
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
            scanf("%d",&B[i][j]);
    }
}
void soma(int A[4][6], int B[4][6], int S[4][6])
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
            S[i][j] = A[i][j] + B[i][j];
    }
}
void diferenca(int A[4][6], int B[4][6], int D[4][6])
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
            D[i][j] = A[i][j] - B[i][j];
    }
}
int main()
{
    int A[4][6], B[4][6], S[4][6], D[4][6];
    preenche(A,B);
    soma(A,B,S);
    diferenca(A,B,D);
    //exibe S
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
        {
            printf("%d ",S[i][j]);
        }
    }
    printf("\n");
    //exibe D
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
        {
            printf("%d ",D[i][j]);
        }
    }
   /*//exibe A
   for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
        {
            printf("%d ",A[i][j]);
        }
    }
    //exibe B
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<6; j++)
        {
            printf("%d ",B[i][j]);
        }
    }*/
    return 0;
}