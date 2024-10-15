#include<stdio.h>
int main(){
    int casos;
    int i;
     int num_pessoas;
        double per_pop, per_geral, per_arq, per_cad;
        double val_pop, val_geral, val_arq, val_cad, rend_total;

    scanf("%d",&casos);
    
    for (i = 1; i <= casos; i++){
       
        scanf("%d",&num_pessoas);
        scanf("%lf",&per_pop);
        scanf("%lf",&per_geral);
        scanf("%lf",&per_arq);
        scanf("%lf",&per_cad);

        val_pop= ((per_pop/100)*num_pessoas)*1;
        val_geral= ((per_geral/100)*num_pessoas)*5;
        val_arq= ((per_arq/100)*num_pessoas)*10;
        val_cad= ((per_cad/100)*num_pessoas)*20;

        rend_total= val_pop+val_geral+val_arq+val_cad;

        printf("A RENDA DO JOGO N. %d E = %.2lf\n", i, rend_total);

    }
    return 0;
}