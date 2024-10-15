#include<stdio.h>
int main(){

    //somar os numeros apos acima da nota de corte e imprimir
    int i,nota[10];
    int soma=0;
    for (i = 0; i <10; i++){
        scanf("%d",&nota[i]);
        
        if(nota[i]>=6){
            //float ponto de corte,nota[10],soma;
            //scanf("%f",pontodecorte);
            //substitui 6 por pontodecorte;
            soma+=nota[i];//soma=soma+nota[i];
        }
        
    }
    printf("%d ",soma);

    return 0;
}