#include<stdio.h>
int main(){
    int numero;
    int a,b,c;
    int nvnum,total;

    scanf("%d",&numero);

    a = (numero%1000-numero%100)/100;
    b = (numero%100-numero%10)/10;
    c = numero%10;

    nvnum = (a+b*3+c*5)%7;
    total= (numero*10)+nvnum;

    printf("O NOVO NUMERO E = %d\n",total);
    return 0;
}