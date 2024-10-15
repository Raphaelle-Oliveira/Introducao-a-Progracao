#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,p,i,j,len_v,ind;
    char caractere,v[499], aux[2];
    scanf("%d ",&n);
    for(i = 0; i <n ; i++){
        p=0;
        j=0;
        fgets(aux, 3, stdin);
        caractere = aux[0];
        fgets(v, 499, stdin);
        v[strlen(v)-1] = '\0'; //remove o \n do fim da string
        len_v=strlen(v);
        for (j = 0; j <len_v; j++){
            if(caractere==v[j]){
                p+=1;
                ind=j;
                break;
            }
        }
        if(p!=0){
            printf("Caractere %c encontrado no indice %d da string.\n",caractere,ind);
        }
        else{
            printf("Caractere %c nao encontrado.\n",caractere);
        }
    }
    return 0;
}