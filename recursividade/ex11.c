#include<stdio.h>
    int produto(int numero, int vezes){
        if(vezes==0){
            return 0;
        }
        else{
            return numero+produto(numero,vezes-1);
        }
        return 0;
    }
int main(){
    int testes, num, a;
    scanf("%d",&testes);
    int i;
    for(i=0;i<testes;i++){
        scanf("%d %d",&num,&a);
        printf("%d\n",produto(num,a));
    }
    return 0;
}