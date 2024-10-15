#include<stdio.h>
int main(){
        int n,i,maior,indice;
        int vetor[10000];
        while(1){
            scanf("%d",&n);
            if(n==0)break;
            for (i=0; i<n; i++){
                scanf("%d",&vetor[i]);
            }
            maior=vetor[0];
            indice=0;
            for (i = 0; i<n; i++){
                if(maior<vetor[i]){
                    maior=vetor[i];
                    indice=i;
                }
            }
            printf("%d %d\n",indice,maior);
    }
    return 0;
}