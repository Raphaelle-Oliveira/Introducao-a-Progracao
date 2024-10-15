#include<stdio.h>
int main(){
    int i,j,A[2][2];
    float determinante;
    for (i = 0; i <2; i++){
        for (j = 0; j <2; j++)
        {
            scanf("%d",&A[i][j]);
        }
        //printf("\n");
    }
    determinante= (A[0][0]*A[1][1])-(A[0][1]*A[1][0]);
    printf("%.2f\n",determinante);

    return 0;
}