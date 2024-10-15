#include<stdio.h>
int main(){
    double A;
    double B;
    double C;
    scanf("%lf",&A);
    scanf("%lf",&B);
    scanf("%lf",&C);
    printf("O VALOR DE DELTA E = %.2lf\n", (B*B)-(4*A*C));
    return 0;
}
