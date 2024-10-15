#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void limpa_string(char *str, int tamanho)
{
    char proibidos[] = {'.', ',', '?', '!'};

    int i = 0;
    int k;

    while (str[i] != '\0')
    {
        for (int j = 0; j < sizeof(proibidos); j++)
        {
            if (str[i] == proibidos[j])
            {
                for (int k = i; k < tamanho; k++)
                {
                    str[k] = str[k + 1];
                }
            }
        }

        i++;
    }
    return;
}

int main()
{
    int i;
    FILE *arq;
    char texto[100] = " ", texto2[30];
    char nome_arq;
    // scanf("%s",nome_arq);
    arq = fopen("teste.txt", "r");
    if (arq == NULL)
    {
        printf("erro na abertura do arquivo\n");
        return 0;
    }
    while (fgets(texto2, 30, arq) != NULL)
    {
        strcat(texto, texto2);
    }
    // printf("%s\n",texto);
    int len_texto;
    len_texto = strlen(texto);

    for (int i = 0; i < len_texto; i++)
    {
        if (texto[i] >= 'A' && texto[i] <= 'Z')
        {
            texto[i] += 32;
        }
    }
    printf("%s\n", texto);
    printf("%d\n", len_texto);

    limpa_string(texto, len_texto);

    printf("%s\n", texto);

    int j;
    char texto_3[30];
    int b = 0;
    for (int l = 0; l < len_texto; l)
    {
        sscanf(texto + l, " %s", texto2);
        printf("%s\n", texto2);
        for (j = l; j < len_texto; j)
        {
            sscanf(texto + j, " %s", texto_3);
            j+=strlen(texto_3);
            printf("Comparando %s e %s\n", texto_3, texto2);
            if (strcmp(texto_3, texto2) == 0)
            {
                printf("igual\n");
            }

        }
        l+=strlen(texto2);
    }

    // if (v1[i] == ' ')
    // {
    //     for (int j = i; j < len_v1; j++)
    //     {
    //         v1[j] = v1[j + 1];
    //         aoi -= 1;
    //     }
    // }

    fclose(arq);

    return 0;
}
