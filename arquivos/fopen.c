#include <stdio.h>
#include <stdlib.h>
int main()
{
    // criando a variável ponteiro para o arquivo
    FILE *pont_arq;
  
    //abrindo o arquivo
    pont_arq = fopen("texto.txt", "r");
        if (pont_arq == NULL)
        {
            printf("ERRO! O arquivo não foi aberto!\n");
        }
        else
        {
            printf("O arquivo foi aberto com sucesso!\n");
        }
    // fechando arquivo
    fclose(pont_arq);
  
    //mensagem para o usuário
    printf("O arquivo foi aberto com sucesso!\n");
  
    system("pause");
    return(0);
}