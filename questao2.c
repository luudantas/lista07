#include <stdio.h>
#include <stdlib.h>
int main()
{
    int temp[31], maior, menor, soma=0,cont=0;
    //preenche, compara maior/menor e soma 
    for(int i=0;i<31; i++)
    {
        scanf("%d",&temp[i]);
        if(i==0) maior=menor=temp[i];
        else 
        {
            if(temp[i]>maior) maior=temp[i];
            if(temp[i]<menor) menor=temp[i];
        }
        soma+=temp[i];
    }
    //compara com a media
    for(int j=0;j<31;j++)
        if(temp[j]<(soma/31.0)) cont++;
    //exibe
    printf("Menor e maior tempertura: %d e %d\n",menor, maior);
    printf("Media de temperatura: %.2f\n",(soma/31.0));
    printf("Numero de dias nos quais a temperatura foi inferior a temperatura media: %d\n",cont);
    return 0;
}