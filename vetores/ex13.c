#include<stdio.h>
int main(){
    int A[100];
    int tam,i,j,cont[100];
    scanf("%d",&tam);
    for(i=0;i<tam;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<tam;i++){
        cont[i]=0;
        for(j=0;j<tam;j++){
            if(A[i]==A[j]){
                cont[i]+=1;
            }
        }
    }
    int maior=0;
    for(i=1;i<tam;i++){
        if(cont[i-1]<cont[i]){
            maior=cont[i];
        }      
    }
    for(i=1;i<tam;i++){
        if(cont[i-1])
    }
    return 0;
}