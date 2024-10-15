#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char palavra[201];
    int i,k,a=0,len_p;
    do{
        if(fgets(palavra,201,stdin)==EOF) break;
        len_p=strlen(palavra);
        for (i = 0; i <len_p; i++){
            if(palavra[i]==' '){
                for (k=i; k<len_p; k++){
                palavra[k]=palavra[k+1];
               }
               len_p=len_p-1;
               i-=1;
            }
        }
        len_p-=2;
        for (i = 0; i<len_p; i++){
            if(palavra[i]==palavra[len_p]) a+=1;
            else{
                a=0;
                printf("nao\n");
                break;
            } 
            len_p-=1;     
        }
        if(a!=0) printf("sim\n");
        
    }while(1);
    return 0;
}