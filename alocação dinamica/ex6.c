#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
    char string[10000];
    int n,i,len_s;
    char *str;
    scanf("%d",&n);
    for (i = 0; i<n; i++){
        scanf(" ");
        scanf("%[^\n]",string);
        len_s=strlen(string);
        len_s+=1;
        str=aloc(string,len_s);
        printf("%s\n",str);
        free(str);
    }
    return 0;
}