#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
    Autora: Luana Dantas
    Data: 16/5/26
*/
int main()
{
    char *cadeia = (char *)malloc(30*sizeof(char));
    char aux;
    scanf(" %[^\n]",cadeia);
    int tam = strlen(cadeia);
    for(int i=tam; i>=0; i--)
    {
        printf("%c",cadeia[i]);
    }
    return 0;
}