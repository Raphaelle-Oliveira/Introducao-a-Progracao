#include<stdio.h>
#include<math.h>
    int main(){
    double areat;
    double T;
    double L1,L2,L3;
    scanf("%lf",&L1);
    scanf("%lf",&L2);
    scanf("%lf",&L3);

    T = (L1+L2+L3)/2;
    areat = sqrt(T*(T-L1)*(T-L2)*(T-L3));

    printf("A AREA DO TRIANGULO E = %.2lf\n",areat);

    return 0;
    }