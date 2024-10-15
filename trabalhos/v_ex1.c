#include<stdio.h>
int main(){
    int n,V[n],num_buscas,buscas,i;
    scanf("%d",&n);
    for ( i = 0; i < n; i++){
        scanf("%d",&V[i]);
    }
    scanf("%d",&num_buscas);
    for ( i = 0; i < num_buscas; i++)
    {
        scanf("%d",&buscas);
        for(i=0; i<n;i++){
            if (buscas==V[i])
            {
                printf("ACHEI\n");
            }
            else printf("NAO ACHEI\n");
        
        }
    }

    return 0;
}