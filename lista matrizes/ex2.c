#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    int A[n][n];
    for (i = 0; i<n; i++){
        for (j = 0; j<n; j++){
            scanf("%d",&A[i][j]);
        }
    }
    for (i =0; i<n; i++){
        for (j=i; j<=i; j++){
            printf("%d",A[i][j]);
        }        
    }
    return 0;
}   