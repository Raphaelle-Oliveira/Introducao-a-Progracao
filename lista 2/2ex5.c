#include<stdio.h>
int main(){
    double nota;
    scanf("%lf",&nota);

    if(nota>=9){
        printf("NOTA = %.1lf ",nota);printf("CONCEITO = A\n");
    }
    if(nota<9&&nota>=7.5){
        printf("NOTA = %.1lf ",nota);printf("CONCEITO = B\n");
    }
    if(nota<7.5&&nota>=6.0){
        printf("NOTA = %.1lf ",nota);printf("CONCEITO = C\n");
    }
    if(nota<6.0){
        printf("NOTA = %.1lf ",nota);printf("CONCEITO = D\n");
    }

    return 0;
}