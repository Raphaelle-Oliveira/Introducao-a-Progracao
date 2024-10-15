#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*void prefixo(int n, char*str){
    char aux[500];
    int i,len_aux;
    strncpy(str,aux, n);
    aux[n]='\0';
    str= aux;
    aux[1]='\0';
}*/
char*aloc(char*string, int tamanho) {
    char* ponteiro = NULL;
    do {
        ponteiro = (char*)malloc((tamanho * sizeof(char)));    
    } while (ponteiro == NULL);

    strncpy(ponteiro, string, tamanho);
    ponteiro[tamanho]='\0';

    return ponteiro;
}
int main(){
    int quantidade,i;
    scanf("%d", &quantidade);
    int tamanho;
    char stringOriginal[600];
    char* resultado;
    while(quantidade--){
        scanf("%d ", &tamanho);
        scanf("%500[^\n]", stringOriginal);
        //printf("%s\n", stringOriginal);
        resultado = aloc(stringOriginal, tamanho);
        printf("%s\n", resultado);
        free(resultado);
    }
    
    // int n;
    // int r,i;
    // char str[500];
    // scanf("%d",&r);
    // for(i=0;i<r;i++){
    // scanf("%d ",&n);
    // scanf("%500[^\n]",str);
    // prefixo(n, str);
    // printf("%s", str);
    // }
    return 0;
}