#include<stdio.h>
int main(){
    int V[11],n,i,j,a,soma;

    scanf("%d",&n);
    for(j=0;j<n;j++){
        for(i=0;i<11;i++){
            scanf("%d",&V[i]);
        }
        soma=0;
        a=1;
        for(i=0;i<9;i++){
            soma+=V[i]*a;
            a++;
        }
        if(soma%11==10) soma=0;
        else soma=soma%11;
        if(V[9]!=soma){
            printf("CPF invalido\n");
        }
        else{
            a=9;
            soma=0;
            for(i=0;i<9;i++){
                soma+=V[i]*a;
                a--;
            }
            if(soma%11==10) soma=0;
            else soma=soma%11;
            if(V[10]!=soma){
                printf("CPF invalido\n");
            }
            else printf("CPF valido\n");
        }
    }

    return 0;
}