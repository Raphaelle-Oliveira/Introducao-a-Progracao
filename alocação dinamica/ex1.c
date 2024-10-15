#include<stdlib.h>
#include<stdio.h>
struct{
    float num, den;//denominador, numerador;
    float divisao;
}typedef Fracao;
int main(){
    int casos,n_entradas, teste;
    int i,j,k;
    Fracao a[50];
    scanf("%d",&casos);
    for(i=0;i<casos;i++){
        scanf("%d",&n_entradas);
        for(j=0;j<n_entradas;j++){
            scanf("%f/%f",&a[j].num,&a[j].den);
            a[j].divisao=a[j].num/a[j].den;
        }
        printf("Caso de teste %d\n",i+1);
        teste = 1;
        for(j=0;j<n_entradas;j++){
            for(k=j+1;k<n_entradas;k++){
                if(a[j].divisao==a[k].divisao){
                    printf("%.0f/%.0f equivalente a %.0f/%.0f\n",a[j].num,a[j].den,a[k].num,a[k].den);
                    teste = 0;
                }
            }
        }
        if (teste) printf("Nao ha fracoes equivalentes na sequencia\n");

    }
    return 0;
}