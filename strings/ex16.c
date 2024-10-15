//limpa string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void str_clean(char*str,char*clr){
    int len_str,len_clr,i,j,k;
    len_str=strlen(str);
    len_clr=strlen(clr);
    for (i=0; i<len_str; i++){
        for (j = 0; j<len_clr; j++){
            if (str[i]==clr[j])
            {
               for (k=i; k<len_str; k++){
                str[k]=str[k+1];
               }
               len_str=len_str-1;
               i=-1;

               break;
            }
        }       
    }
    str[len_str]='\0';
}
int main(){
    char str[257],clr[257];//str= original; clr=remover
    scanf("%257[^\n]", str);
    scanf("\n%257[^\n]", clr);
    str_clean(str, clr) ;
    printf("%s\n", str);
    return 0;
}