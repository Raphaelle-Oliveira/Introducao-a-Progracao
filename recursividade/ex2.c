
#include<stdio.h>
#include<string.h>

int num (char*string, int tamanho, int cont){
    int i;
    for(i=cont;i<tamanho-1;i++)
    {
        if(string[i]=='h' && string[i+1] == 'i'){
            return (1+num(string, tamanho,i+1));
        }
    }
    return 0;
}

int main()
{
    char frase[5000];
    int i,n,len,hi,b;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        b=0;
        scanf(" %[^\n]",frase);
        len=strlen(frase);
        hi= num(frase,len,b);
        printf("%d\n",hi);
    }

    return 0;
}
