#include<stdio.h>
int main(){
    //A+B=C
    int A[10],B[10],C[10],i;
    for(i=0;i<10;i++){
        scanf("%d",&A[i]);
        scanf("%d",&B[i]);
    C[i]=A[i]+B[i];
    printf("%d\n",C[i]);
    }
    return 0;
}