#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void preenche(int X[10], int Y[10])
{
    for(int i=0; i<10; i++)
        scanf("%d",&X[i]);
    for(int j=0;j<10;j++)
        scanf("%d",&Y[j]);
    intercala(X,Y);
}
void intercala(int X[10],int Y[10])
{
    int Z[20];
    for(int k=0; k<20; k++)
    {
        if(k%2==0) Z[k]=X[k/2];//divide por 2 para crescer mais lentamente (0 a 10)
        else Z[k]=Y[k/2];
    }
    exibe(Z);
}
void exibe(int Z[20])
{
    for(int m=0;m<20;m++)
    {
        printf("%d ",Z[m]);
    }
}
int main()
{
    int X[10], Y[10];
    preenche(X,Y);
    return 0;
}