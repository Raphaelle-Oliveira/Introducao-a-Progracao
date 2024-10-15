#include<stdio.h>
    int potencia(int numero, int elevado){
        if(elevado==0){
            return 1;
        }
        else{
            return numero*potencia(numero,elevado-1);
        }
        return 0;
    }
int main(){
    int testes, num, a;
    scanf("%d",&testes);
    int i;
    for(i=0;i<testes;i++){
        scanf("%d %d",&num,&a);
        printf("%d\n",potencia(num,a));
    }
    return 0;
}