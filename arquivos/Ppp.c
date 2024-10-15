#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char a[50];
    int i,num_linha=1;
    FILE *arq;
    arq= fopen("teste.txt","r");
    while(fgets(a,50,arq) != NULL){
        a[strcspn(a,"\n")]=0;
        printf("%s\n",a);
        printf("linha %d ",num_linha);
        for(i=0;i<strlen(a);i++){
            if(a[i]== 'x' || a[i]=='X'){
                printf("%d",i+1);
            }

        }
        printf("\n");
        num_linha++;
    }
    fclose(arq);
    return 0;
}