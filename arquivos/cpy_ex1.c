#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    FILE *arq;
    int a;
    int i,j,k;
    char x[30],y[100]="\0",z[100];
    char eliminar[] = "!;.?,-";
    arq= fopen("texto.txt","r");
    while(fgets(x,30,arq)!= NULL){
        strcat(y,x);
    }
    printf("%s\n\n\n\n",y);

    for(i=0;i<strlen(y);i++){
            for(j=0;j<strlen(eliminar);j++){
                if(y[i]==eliminar[j]){
                    for(k=i;k<strlen(y);k++){
                        y[k]=y[k+1];
                    }
                }
            }
    }

    for(i=0;i<strlen(y);i++){
            if(y[i]>='A' && y[i]<='Z'){
                y[i]+=32;
            }
    }
    int h=0;
    printf("%s\n",y);
    int len_y=strlen(y);
    for(i=0;i<len_y;i++){
        h+= sscanf(y+i,"%s",z);
        
        i+=strlen(z);
    }
    char **string;
    string=(char**)malloc(sizeof(char*)*h);
    printf("%d\n",h);
    a=0;
    for(i=0;i<len_y;i++){
        sscanf(y+i,"%s",z);
        string[a]=(char*)malloc(sizeof(char)*strlen(z)+1);
        sscanf(y+i,"%s",string[a]);
        i+=strlen(z);
        printf("%s",string[a]);
        a++;
    }
    int len_j;
    int u;
    u=h;
    for(i=0;i<h;i++){
        for(j=i+1;j<h;j++){
            len_j=strlen(string[j]);
            if(string[j][0]!='\0'){
                if(strcmp(string[i],string[j]) == 0){
                    for(k=0;k<h;k++){
                        string[j][k]='\0';
                    }
                    u-=1;
                }
            }
        }
    }
    printf("%d\n",u);
    fclose(arq);
    return 0;
}