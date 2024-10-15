#include<stdio.h>
int main(){
    int i,j;//i= linha. j=coluna;
    int linhas, colunas;
    scanf("%d %d",&linhas,&colunas);
    int A[linhas][colunas];
    for (i=0; i <linhas; i++){
        for (j = 0; j<colunas; j++){
        if(i%2==0 && j%2!=0){
            A[i][j]=0;
            printf("%d",A[i][j]);
        }
        if(i%2!=0&&j%2==0){
            A[i][j]=0;
            printf("%d",A[i][j]);
        }
        if(i%2==0&&j%2==0){
            A[i][j]=1;
            printf("%d",A[i][j]);
        }
        if(i%2!=0&&j%2!=0) {
            A[i][j]=1;
            printf("%d",A[i][j]);
        }
        }  
        printf("\n");
    }
    return 0;
}