
#include<stdio.h>
#include<stdlib.h>
int main(){
    int **Matriz;
    int M,i,j,aux;
    scanf("%d",&M);
    Matriz=(int**)malloc(sizeof(int*)*M);

    for(i=0;i<M;i++){
        Matriz[i]= (int*)malloc(sizeof(int)*(i+1));
        for(j=0;j<i+1;j++){
            scanf("%d",&aux);
            Matriz[i][j]=aux*5;
        }
    }

    for(i=0;i<M;i++){
        for(j=0;j<i+1;j++){
            Matriz[i][j]/=5;
            printf("%d ",Matriz[i][j]);
        }
         printf("\n");
    }
    for(i=0;i<M;i++){
        for(j=0;j<i+1;j++){
            Matriz[i][j]*=5;
            printf("%d ",Matriz[i][j]);
        }
        printf("\n");
    }
        

    return 0;
}