#include<stdio.h>
int main(){
    int linhas,colunas,i,j;
    scanf("%d %d",&linhas,&colunas);
    int A[linhas][colunas];
    for (i=0; i<linhas; i++){
        for (j=0; j<colunas; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<linhas;i++){
        if(i=0){
        for(j=0;j<colunas;j++){
            printf("%d",A[i][j]);
        }
        }
        if(i>0&&i<linhas-1){
            printf("%d",A[i][colunas-1]);
        }
        if(i=linhas-1){
            for(j=colunas-2;j>=0;j--){
                printf("%d",A[i][j]);
            }
        }
    }
    
    for(j=0;j<colunas;j++){
        printf("%d",A[0][j]);
    }
    for(i=1;i<linhas;i++){
        printf("%d",A[i][colunas-1]);
    }
    for(j=colunas-2;j>=0;j--){
        printf("%d",A[linhas-1][j]);
    }
    for

    

    return 0;
}