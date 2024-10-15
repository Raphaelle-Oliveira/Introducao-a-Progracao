#include<stdio.h>
int main(){
    double precodfab, percdist,percimp, total;
    scanf("%lf",&precodfab);
    scanf("%lf",&percdist);
    scanf("%lf",&percimp);

    total = precodfab+(percdist*precodfab/100)+(percimp*precodfab/100);

    printf("O VALOR DO CARRO E = %.2lf\n",total);

    return 0;
}