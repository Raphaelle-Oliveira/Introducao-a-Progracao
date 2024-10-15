#include<stdio.h>
int main(){
    int numero;
    int a,b,c;
    int numinvert;

    scanf("%d",&numero);

    a = (numero%1000-numero%100)/100;
    b = (numero%100-numero%10)/10;
    c = numero%10;
    numinvert= (c*100)+(b*10)+a;

    printf("%d\n",numinvert);

    return 0;
}