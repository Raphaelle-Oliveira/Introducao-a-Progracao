#include<stdio.h>
int main(){
    int linhas, colunas;
    scanf("%d %d",&linhas,&colunas);
    int A[linhas][colunas];
    int i,j,k,a=1;//i= linha. j=coluna;
    for (i=0; i<linhas; i++){
        if(i%2!=0){
        A[i][0]=a;
        a++;
        printf("%d",A[i][0]);
        }
        if(i%2==0){
        A[i][0]=0;
        printf("%d",A[i][0]);
        }
        for (j=1; j<colunas; j++){
            if(i%2==0&&j%2!=0){
            A[i][j]=a;
            a++;
            printf(" %d",A[i][j]);
            }
            if(i%2!=0&&j%2==0){
            A[i][j]=a;
            a++;
            printf(" %d",A[i][j]);
            }
            if(i%2==0&&j%2==0){
            A[i][j]=0;
            printf(" %d",A[i][j]);
            }
            if(i%2!=0&&j%2!=0) {
            A[i][j]=0;
            printf(" %d",A[i][j]);
            }
        }  
        printf("\n");
    }
    
    return 0;
}