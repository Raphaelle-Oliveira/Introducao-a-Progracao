#include<stdio.h>
int main(){
    int casos,i;
    int numero,numero2;
    int a,b,c;
    int numinvert,numinvert2;
    scanf("%d",&casos);
    for(i=0;i<casos;i++){

    scanf("%d%d",&numero,&numero2);

    a = (numero%1000-numero%100)/100;
    b = (numero%100-numero%10)/10;
    c = numero%10;
    numinvert= (c*100)+(b*10)+a;

    a = (numero2%1000-numero2%100)/100;
    b = (numero2%100-numero2%10)/10;
    c = numero2%10;
    numinvert2= (c*100)+(b*10)+a;

    if(numinvert > numinvert2){
        printf("%d\n",numinvert);
    }
    else
    printf("%d\n",numinvert2);
    }

    return 0;
}