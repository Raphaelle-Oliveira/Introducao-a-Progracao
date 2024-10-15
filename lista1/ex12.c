#include<stdio.h>
int main(){
    int cem,cinq,dez,um;
    int numero;
    int restcem,restcinq,restdez;
    scanf("%d",&numero);
    
    restcem= numero%100;
    restcinq= restcem%50;
    restdez= restcinq%10;
    cem= numero/100;
    cinq= restcem/50;
    dez= restcinq/10;
    um= restdez;

    printf("NOTAS DE 100 = %d\n",cem);
    printf("NOTAS DE 50 = %d\n",cinq);
    printf("NOTAS DE 10 = %d\n",dez);
    printf("MOEDAS DE 1 = %d\n",um);

    return 0;
}