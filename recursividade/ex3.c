#include<stdio.h>
#include<string.h>

int num (char*string, int tamanho, int cont){
    int i;
    for(i=cont;i<tamanho;i++)
    {
        if(string[i]=='5'){
            return (1+num(string, tamanho,i+1));
        }
    }
    return 0;
}

int main()
{
    char frase[50];
    int i,n,len,cinco,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        b=0;
        scanf(" %[^\n]",frase);
        len=strlen(frase);
        cinco= num(frase,len,b);
        printf("%d\n",cinco);
    }

    return 0;
}