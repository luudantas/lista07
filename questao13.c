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
    scanf(" %s",cadeia);
    int tam = strlen(cadeia);
    for(int i=tam-1; i>=0; i--)//não imprime o \0
    {
        printf("%c",cadeia[i]);
    }
    printf("\n");
    return 0;
}