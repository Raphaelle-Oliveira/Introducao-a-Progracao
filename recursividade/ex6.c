#include<stdio.h>
    int orelhas(int quant){
        if(quant>0){
            if(quant%2==0){
                return 3+orelhas(quant-1);;
            }
            if(quant%2!=0){
                return 2+orelhas(quant-1);
            }
        }
        return 0;
    }
int main(){
    int testes, i, n;
    scanf("%d",&testes);
    for(i=0;i<testes;i++){
        scanf("%d",&n);
        printf("%d\n",orelhas(n));
    }

    return 0;
}