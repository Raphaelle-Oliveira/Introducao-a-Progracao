#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char palavra[200];
    int i,len_p;
    int flag = 1;
    
    while(scanf("%[^\n]", &palavra) != EOF){
        flag = 1;
        len_p = strlen(palavra);

        for(i = 0; i < len_p; i++){
            if(palavra[i] != palavra[(len_p-i)]){
                flag = 0;
            }
        }

        if(flag == 0){
            printf("nao\n");
        }else{
            printf("sim\n");
        }
        getchar();

    }
    return 0;
}