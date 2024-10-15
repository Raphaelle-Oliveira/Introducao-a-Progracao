#include<stdio.h>
int main(){
    int i,n;//n=quantidade de numeros.
    int ant = -1, num;//ant=primeiro da sequencia, num=próximos numeros.
    int comp = 0,compmax = 1;//comp=comprimento sendo analisado,compmax=comprimento que buscamos,o maior.
    
    scanf("%d",&n);

    if(n >=1){ 
        for(i = 0; i < n; i++){
            scanf("%d", &num);
            if(num > ant){
                comp++;
                if(compmax < comp){
                    compmax = comp;
                }
            }
            else{
                comp = 1;
            }
            ant = num;
        }
    }
    printf("O comprimento do segmento crescente maximo e: %d\n",compmax-1);
    return 0;
}