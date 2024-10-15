#include<stdio.h>
#include<math.h>
int main(){
double hpir;
double arestahex;
double areahex;
double raiz3;
double meiaarea, VPir;
scanf("%lf",&hpir);
scanf("%lf",&arestahex);


meiaarea = 3*(arestahex*arestahex);
raiz3 = sqrt(3);
areahex = (meiaarea*raiz3)/2;

VPir = (areahex*hpir)/3;

printf("O VOLUME DA PIRAMIDE E = %.2lf METROS CUBICOS\n",VPir);
return 0;
}