#include<stdio.h>
int main(){
    int conta;
    double consumo = 0;
    char consumidor;
    double conr,coni,conc;


    scanf("%d",&conta);

    scanf("%lf",&consumo);

    scanf(" %c",&consumidor);

    // printf("%d\n",conta);
    // printf("%.2lf\n",consumo);
    // printf("%c\n",consumidor);

    printf("CONTA = %d\n",conta);

    if(consumidor == 'C' || consumidor=='c'){
        if(consumo > 80){ 
            conc= 500.00+(0.25*(consumo-80));
            printf("VALOR DA CONTA = %.2lf",conc);
        }
        else{
            conc = 500;
            printf("VALOR DA CONTA = %.2lf",conc);
        }
    }
    if(consumidor == 'I' || consumidor == 'i'){
        if(consumo > 100){
            coni= 800.00+(0.04*(consumo-100));
            printf("VALOR DA CONTA = %.2lf\n", coni);
        }
        else{
            coni=800;
            printf("VALOR DA CONTA = %.2lf\n",coni);
        }
    }
      if(consumidor == 'R' || consumidor =='r'){
            conr= 5.00+(0.05*consumo);
            printf("VALOR DA CONTA = %.2lf",conr);
    }

    return 0;
}
