#include <stdio.h>
#include <stdlib.h>
void recebeNota (float nota[10])
{
    
    for(int i=0; i<10; i++)
    {
        scanf("%f",&nota[i]);
    }
    calculaMedia(nota);
}
void calculaMedia(float nota[10])
{
    int soma=0;
    int contmedia=0;
    for(int j=0; j<10; j++)
    {
        soma+=nota[j];
        if(nota[j]>=6) contmedia++;
    }
    printf("Media: %.2f\n",soma/10.0);
    printf("Alunos acima da media: %d\n",contmedia);
}
int main()
{
    float nota[10];
    recebeNota(nota);
    return 0;
}