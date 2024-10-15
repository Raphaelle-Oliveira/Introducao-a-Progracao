#include <stdio.h>
int main(void) {
    FILE *arq;
    char nome[50];
    int idade;
    float altura;

    arq = fopen("arquivo.txt", "r");
    if (arq != NULL) {
        fscanf(arq, "%s %d %f", nome, &idade, &altura);
        printf("Nome: %s\nIdade: %d\nAltura: %.2f\n", nome, idade, altura);
        fclose(arq);
    } else {
        printf("Erro ao abrir o arquivo.\n");
    }
    return 0;
}
