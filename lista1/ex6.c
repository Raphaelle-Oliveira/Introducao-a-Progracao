#include<stdio.h>
int main(){
    int horas;
    int minutos;
    int segundos;
    int h,m,s,soma;
    scanf("%d",&horas);
    scanf("%d",&minutos);
    scanf("%d",&segundos);

    h = horas*60*60;
    m = minutos*60;
    s = segundos*1;
    soma = h+m+s;

    printf("O TEMPO EM SEGUNDOS E = %d\n",soma);
    return 0;
}