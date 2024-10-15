#include<stdio.h>
#include<stdlib.h>
int main(){
    int A[9][9],aux=0,aux2=0,i,j;
    int soma;
    for (i=0; i<9; i++){
        for(j=0; j<9; j++){
            scanf("%d",&A[i][j]);
        }
    }
    soma = 1+2+3+4+5+6+7+8+9;
    for(i=0; i<9;i++){
        aux=0;
        for(j=0;j<9;j++){
            aux+=A[i][j];
        }
        if(aux!=soma){
            printf("invalido\n");
            return 0;
        }
    }
    for(j=0;j<9;j++){
        aux2=0;
        for(i=0;i<9;i++){
            aux2+=A[i][j];
        }
        if(aux2!=soma){
            printf("invalido\n");
            return 0;
        }
    }
    printf("valido\n");
    return 0;
}