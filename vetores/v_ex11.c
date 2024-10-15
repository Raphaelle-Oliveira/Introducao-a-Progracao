#include<stdio.h>
int main(){
    int V[1000],n,i;//inverter os numeros
    int W[1000],a=0,menor,maior;
    scanf("%d",&n);

    for (i =0; i<n; i++){
        scanf("%d",&V[i]);
    }
    for (i =n-1; i>=0; i--){
        W[i]=V[a];
        a++;
    }
    printf("%d",V[0]);
    for (i = 1; i<n; i++)
    {
        printf(" %d",V[i]);
    }
    printf("\n%d",W[0]);
    for (i = 1; i<n; i++)
    {
        printf(" %d",W[i]);
    }
    maior = V[0];
    for (i = 0; i <n; i++)
    {
        if(V[i]>maior){
            maior=V[i];
        }
    }
    printf("\n%d",maior);
    menor= W[0];
    for (i = 0; i <n; i++)
    {
        if(W[i]<menor){
            menor=W[i];
        }
    }
    printf("\n%d\n",menor);
    
    return 0;
}