#include <stdio.h>
#include <string.h>

char entrada_teste1[] = "Hello world! This is a test text. Hello world again.";
char entrada_teste2[] = "123 456 789 123 456 789 123 456 789.";

void limpa_string(char *str)
{
    char proibidos[] = {'.', ',', '?', '!'};

    int i = 0;

    while (str[i] != '\0')
    {
        for (int j = 0; j < sizeof(proibidos); j++)
        {
            if (str[i] == proibidos[j])
            {
                str[i] = '\0';
                return;
            }
        }

        i++;
    }
}

int main(){
    char entrada[1000], palavra[1000], palavras_lidas[1000][1000],palavras_lidas2[1000][1000];
    int i, j,k=0, tamanho_lido, tamanho_entrada, num_palavras=0;
    int novo;

    scanf("%[^\n]s", entrada);

    tamanho_entrada = strlen(entrada);
    i = 0;

    while (i < tamanho_entrada){
        int lidas = sscanf(&entrada[i], "%s", palavra);

        tamanho_lido = strlen(palavra);

        printf("Palavra %s encontrada na posicao %d tem tamanho %d\n", palavra, i, tamanho_lido);

        i += tamanho_lido + 1;
        num_palavras++;

        limpa_string(palavra);
        strcpy(palavras_lidas[k],palavra);
        strcpy(palavras_lidas2[k],palavra);

        k++;

        printf("Palavra apos limpeza: %s\n", palavra);

    }
    printf("%d\n",num_palavras);
    novo=num_palavras;
    int m;
    for(m=0;m<num_palavras-1;m++){
        for(j=m+1;j<num_palavras;j++){
            if(strcmp(palavras_lidas[m],palavras_lidas2[j])==0){
                palavras_lidas2[j][0]='\0';
                novo-=1;
             }
        }
    }
    printf("%d\n",novo);

    return 0;
}