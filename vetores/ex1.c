#include<stdio.h>
#include<stdlib.h>

int main(){
    int vetor[100000],busca,aux;
    int tamanho,i,j,quantBuscas;
    scanf("%d",&tamanho);

    for(i=0;i<tamanho;i++){
        scanf("%d",&vetor[i]);
    }

    scanf("%d",&quantBuscas);

    for(i=0;i<quantBuscas;i++){
        aux=0;
        scanf("%d",&busca);
        for(j=0;j<tamanho;j++){
            if(busca==vetor[j]) aux++;
        }
        if(aux==0) printf("NAO ACHEI\n");
        else printf("ACHEI\n");
    }

    return 0;
}
