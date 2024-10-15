#include<stdio.h>
int main(){
    int i,j,n,a;
    scanf("%d",&n);
    int A[n][n];
    for (i = 0; i<n; i++){
        for (j = 0; j<n; j++){
            scanf("%d",&A[i][j]);
        }
    }
    a=n;
    for (i =0; i<=a; i++){
        for (j=n; j>0; j--){
            printf("%d\n",A[i][j-1]);
            break;
        }        
        n=n-1;
    }
    return 0;
}   