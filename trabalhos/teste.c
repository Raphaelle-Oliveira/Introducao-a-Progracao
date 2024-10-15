#include<stdio.h>
int main(){
    int num;
    int uni, dez, cen, mil, ordem;
    scanf("%d",&num);
    if (num >= 10000) {
        printf("Numero invalido! \n");
        return 0;
    }
    mil =  (num%10000-num%1000)/1000;
    cen = (num%1000-num%100)/100;
    dez = (num%100-num%10)/10;
    uni = num%10;

    if(mil) printf("(quarta ordem) ");
    else if(cen) printf("(terceira ordem) ");
    else if(dez) printf("(segunda ordem) ");
    else printf("(primeira ordem) ");

    printf("%d = ", num);

    if(mil){
        if (mil == 1) printf("%d unidade de milhar", mil);
        else printf("%d unidades de milhar", mil);
        if (cen || dez || uni) printf(" + ");
    }
    if(cen){
        if (cen == 1) printf("%d centena", cen);
        else printf("%d centenas", cen);
        if (dez || uni) printf(" + ");
    }
    if(dez){
        if (dez == 1) printf("%d dezena", dez);
        else printf("%d dezenas", dez);
        if (uni) printf(" + ");
    }
    if(uni){
        if (uni == 1) printf("%d unidade", uni);
        else printf("%d unidades", uni);
    }

    printf(" = ");

    if(mil){
        mil *= 1000;
        printf("%d", mil);
        if (cen || dez || uni) printf(" + ");
    }
    if(cen){
        cen *= 100;
        printf("%d", cen);
        if (dez || uni) printf(" + ");
    }
    if(dez){
        dez *= 10;
        printf("%d", dez);
        if (uni) printf(" + ");
    }
    if(uni){
        printf("%d", uni);
    }

    return 0;
}