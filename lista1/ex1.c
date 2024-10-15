
#include<stdio.h>
int main(){
    float peso;
    char atividade;
    int p_d=0,p_b=0;
    int caminhada=0,natacao=0;
    int pessoas;
    float danca=0,bike=0;
    float media_peso_danca;
    float pessoas_bicicleta=0;

    while(1){
        scanf("%f",&peso);
        scanf(" %c",&atividade);
        switch (atividade)
        {
        case 'C':
            caminhada+=1;
            break;
        case 'N':
            natacao+=1;
            break;
        case 'D':
            p_d+=1;
            danca+=peso;
            break;
        case 'B':
            p_b+=1;
            break;

        default:
            break;

        }
        printf("Quantidade de pessoas que caminham: %d\n",caminhada);
        printf("Quantidade de pessoas que nadam: %d\n",natacao);
        media_peso_danca= p_d*danca;
        printf("Media dos pesos das pessoas que dancam: %.1f\n",media_peso_danca);
        pessoas= p_b+p_d+caminhada+natacao;
        if(p_b!=0){
            pessoas_bicicleta= ((float)p_b/(float)pessoas)*100;
            printf("Porcentagem das pessoas que andam de bicicleta %.1f\n",pessoas_bicicleta);
        }
        if(p_b==0){
            printf("Porcentagem das pessoas que andam de bicicleta 0\n");
        }
    }

    return 0;
}