#include<stdio.h>
int main(){
    double a,b,c,d,e,f;
    double valory,valorx;

    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    scanf("%lf",&d);
    scanf("%lf",&e);
    scanf("%lf",&f);
    
    valory= ((f*a)-(d*c))/((a*e)-(d*b));
    valorx= (c-(b*valory))/a;

    printf("O VALOR DE X E = %.2lf\n",valorx);
    printf("O VALOR DE Y E = %.2lf\n",valory);
    return 0;
}