#include <stdio.h>
#include <string.h>

int main()
{
    char entrada[1000];
    int i, tamanho;
    scanf("%[^\n]s", entrada);

    int tamanho_entrada = strlen(entrada);

    char palavra[1000];
    i = 0;
    while (i < tamanho_entrada)
    {
        int lidos = sscanf(&entrada[i], "%s", palavra);

        tamanho = strlen(palavra);

        printf("Palavra %d: %s, %d caracteres lidos\n", i, palavra, lidos);

        i += tamanho + 1;
    }

    return 0;
}