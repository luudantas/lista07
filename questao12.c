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
    int cons=0, vog=0;
    scanf(" %[^\n]",cadeia);
    for(int i=0; i<strlen(cadeia); i++)
    {
        if(tolower(cadeia[i]) == 'a'||
        tolower(cadeia[i]) == 'e'||
        tolower(cadeia[i]) == 'i'||
        tolower(cadeia[i]) == 'o'||
        tolower(cadeia[i]) == 'u') vog++;
        else if(tolower(cadeia[i])!=' ') cons++; //não considera espaços
    }
    printf("Vogais: %d\n", vog);
    printf("Consoantes: %d\n",cons);
    return 0;
}