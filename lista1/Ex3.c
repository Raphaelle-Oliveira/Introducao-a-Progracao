#include<stdio.h>
int main(){
    double r;
    double a;
    double a_circulo, a_lateral, a_total,precoF;
    scanf("%lf",&r);
    scanf("%lf",&a);

    a_circulo = 2 * (3.14159 * (r*r));
    a_lateral = 2 * 3.14159 * r * a;
    a_total= a_circulo + a_lateral;
    precoF= a_total*100;

    printf("O VALOR DO CUSTO E = %.2lf\n", precoF);
    return 0;
}