#include<stdio.h>
int main(){
    double massa,aceleracao,tempo;
    double acl2,velocidade,espacoperc,trabalho,forca;
    scanf("%lf", &massa);
    scanf("%lf", &aceleracao);
    scanf("%lf", &tempo);

    acl2 = aceleracao*3.6;
    velocidade = acl2*tempo;
    espacoperc = (aceleracao*(tempo*tempo))/2;
    trabalho = ((massa*1000)*(aceleracao*tempo*aceleracao*tempo))/2;

    printf("VELOCIDADE = %.2lf\n",velocidade);
    printf("ESPACO PERCORRIDO = %.2lf\n",espacoperc);
    printf("TRABALHO REALIZADO = %.2lf\n",trabalho);

    return 0;

}