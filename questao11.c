#include <stdio.h>
#include <stdlib.h>
/*
    Autora: Luana Dantas
    Data: 16/5/26
    Objetivo: Imprimir alfabeto maiúsculo
*/
int main()
{
    char letra = 'A';
    char *ptrLetra = &letra;
    for(int i=0; i<26; i++)
        printf("%c ",*(ptrLetra) + i);
    return 0;
}