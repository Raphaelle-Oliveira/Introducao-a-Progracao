#include<stdio.h>
int main(){
    int A[10],i;//inverter os numeros
    int V[10],n=9;

    for (i =0; i<10; i++){
        scanf("%d",&A[i]);
        V[n]=A[i];
        n--;
    }
    for (n = 0; n <10; n++){
    printf("%d",V[n]);
    }
    
    return 0;
}