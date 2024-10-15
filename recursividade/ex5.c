#include<stdio.h>
int soma(int vetor[], int tamanho){
    int i;
    if(tamanho>=1){
        return vetor[tamanho-1]+soma(vetor,tamanho-1);
    }
    return 0;
}
int main(){
    int testes, n, numero[30],i,j;
    scanf("%d",&testes);
    for(i=0;i<testes;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++){
            scanf("%d",&numero[j]);
        }
        printf("%d\n",soma(numero,n));
    }
    return 0;
}