#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    struct{
        char produtom[51];
        double preco;
    } typedef Mercado;
    struct{
        char produtoc[51];
        int q;
        double valor;
    }typedef Compra;
    
int main(){
    int n;//numero de casos de teste
    int i,j,k,m,p,s;//m=numero de produtos. p=n produtos que ela vai comprar.
    double valor,aux;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&m);
        Mercado v_m[m];
        for(j=0;j<m;j++){
            scanf(" ");
            scanf("%s",v_m[j].produtom);
            scanf("%lf",&v_m[j].preco);
        }
        scanf("%d",&p);
        Compra v_c[p];
        valor=0.00;
        for(j=0;j<p;j++){
            scanf(" ");
            scanf("%s",v_c[j].produtoc);
            scanf("%d",&v_c[j].q);
        }
        for(j=0;j<p;j++){
            for(k=0;k<m;k++){
                if(strcmp(v_c[j].produtoc,v_m[k].produtom)==0){
                    valor+=(double)v_c[j].q*v_m[k].preco;
                }
            }
        }
        printf("R$ %.2lf\n",valor);
    }

    return 0;
}