int soma(int num){
    if(num>0){
        return num+soma(num-1);
    }
    return 0;
}
#include<stdio.h>
int main(){
    int testes, numero,i;
    scanf("%d",&testes);
    for(i=0;i<testes;i++)
    {
        scanf("%d",&numero);
        printf("%d\n",soma(numero));
    }
    return 0;
}