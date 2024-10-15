
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    float *v; // Definindo o ponteiro v
    int i, num_componentes;

    printf("Informe o número de componentes do vetor: ");
    scanf("%d", &num_componentes);

    // Alocando dinamicamente o espaço necessário
    v = (float *)malloc(num_componentes * sizeof(float));
    //v= (float*)calloc(num_componentes,sizeof(float));

    // Armazenando os dados no vetor
    for (i = 0; i < num_componentes; i++) {
        printf("Digite o valor para a posição %d do vetor: ", i + 1);
        scanf("%f", &v[i]);
    }

    // Percorrendo o vetor e imprimindo os valores
    printf("\nValores do vetor dinâmico:\n");
    for (i = 0; i < num_componentes; i++) {
        printf("%.2f\n", v[i]);
    }

    // Liberando o espaço de memória alocado
    free(v);

    return 0;
}
