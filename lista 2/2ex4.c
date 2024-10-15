#include<stdio.h>
int main(){
    int h;
    double vm;//quando o tempo for inferior a tres horas
    double valor;
    scanf("%d",&h);

    if(h>=3){
        valor= ((h/3)*10);

        if(h%3 > 0){
            valor += 5;
        }

        printf("O VALOR A PAGAR E = %.2lf\n",valor);
    }
    else{
        vm= 5*h;
        printf("O VALOR A PAGAR E = %.2lf\n",vm);
    }

    return 0;
}