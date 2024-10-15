#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int V[n],num_buscas,buscas,i,a;
    int igual=0;
    for ( i = 0; i < n; i++){
        scanf("%d",&V[i]);
    //printf("vetor %d\n",V[i]);
    }
    scanf("%d",&num_buscas);
    //printf("n de buscas%d\n",num_buscas);
    for ( a = 0; a < num_buscas; a++){
        scanf("%d",&buscas);
        for(i=0 ; i<n ;i++){
            if (buscas==V[i]){
                igual++;
                break;
            }
        }

    if(igual==0) printf("NAO ACHEI\n");
    else printf("ACHEI\n");
    igual=0;
    }

    return 0;
}