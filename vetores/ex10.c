#include<stdio.h>
int main(){
    int n,v[10000],i,soma=1,maior,indice;
    scanf("%d",&n);
    for (i=0; i<n; i++){
        scanf("%d",&v[i]);
        
    }
    for(i=n-2; i!=-1; i--){
        if (v[i]==v[n-1])
        {
            soma+=1;
        }
    }
    printf("Nota %d, %d vezes\n",v[n-1],soma);
    maior=v[0];
    for(i=1;i<n;i++){
        if (v[i]>maior){
            maior=v[i];
            indice=i;
        }
    }
    printf("Nota %d, indice %d",maior,indice);
    return 0;
}