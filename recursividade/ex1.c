#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int x (char*string, int tamanho,int cont)
{
    int i;
    if(cont == tamanho-1)
    {
        if(string[cont]=='x' || string[cont]=='X'){
            return 1;
        }else{
            return 0;
        }
    }
    else
    {
        for(i=cont; cont<tamanho-1;i++)
        {
            if(string[i]=='x' || string[i]=='X')
            {
                if(i == 0)
                {
                    return (1+x(string, tamanho, i+1));
                }
                else{
                    return (1+x(string, tamanho, i+1));
                }
            }
            else return (x(string, tamanho, i+1));
        }
    }
    return 0;
}

int main(){
    int n,i;
    char s[5000];
    int len_s,b;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        b=0;
        scanf(" %[^\n]",s);
        len_s=strlen(s);
        printf("%d\n",x(s,len_s,b));
    }

    return 0;
}