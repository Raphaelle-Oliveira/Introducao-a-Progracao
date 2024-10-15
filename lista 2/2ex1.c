#include<stdio.h>
int main(){
    double a,b,c;
    double media;

    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    media= (a+b+c)/3;

    printf("MEDIA = %.2lf\n",media);
    if(media>=6.0){
        printf("APROVADO\n");
    }
    else{
        printf("REPROVADO\n");
    }
    return 0;
}