#include<stdio.h>
#include<string.h>
#include<stdlib.h>
    int main(){
        char pais[100];
        int a;
        while(scanf("%s",pais)!=EOF){
            a=0;
            if(strcmp(pais,"brasil")==0){
                printf("Feliz Natal!\n");
                a=1;
            }
            if(strcmp(pais,"alemanha")==0){
                printf("Frohliche Weihnachten!\n");
                a=1;
            }
            if(strcmp(pais,"austria")==0){
                printf("Frohe Weihnacht!\n");
                a=1;
            }
            if(strcmp(pais,"coreia")==0){
                printf("Chuk Sung Tan!\n");
                a=1;
            }
            if(strcmp(pais,"espanha")==0||strcmp(pais,"argentina")==0||strcmp(pais,"chile")==0||strcmp(pais,"mexico")==0){
                printf("Feliz Navidad!\n");
                a=1;
            }
            if(strcmp(pais,"grecia")==0){
                printf("Kala Christougena!\n");
                a=1;
            }
            if(strcmp(pais,"estados-unidos")==0||strcmp(pais,"inglaterra")==0||strcmp(pais,"australia")==0||strcmp(pais,"antardida")==0||strcmp(pais,"canada")==0){
                printf("Merry Christmas!\n");
                a=1;
            }
            if(strcmp(pais,"suecia")==0){
                printf("God Jul!\n");
                a=1;
            }
            if(strcmp(pais,"turquia")==0){
                printf("Mutlu Noeller!\n");
                a=1;
            }
            if(strcmp(pais,"irlanda")==0){
                printf("Nollaig Shona Dhuit!\n");
                a=1;
            }
            if(strcmp(pais,"belgica")==0){
                printf("Zalig Kerstfeest!\n");
                a=1;
            }
            if(strcmp(pais,"italia")==0){
                printf("Buon Natale!\n");
                a=1;
            }
            if(strcmp(pais,"libia")==0){
                printf("Buon Natale!\n");
                a=1;
            }
            if(strcmp(pais,"siria")==0){
                printf("Milad Mubarak!\n");
                a=1;
            }
            if(strcmp(pais,"marrocos")==0){
                printf("Milad Mubarak!\n");
                a=1;
            }
            if(strcmp(pais,"japao")==0){
                printf("Merii Kurisumasu!\n");
                a=1;
            }
            if (a==0){
                printf("-- NOT FOUND --\n");
            }
    }
    return 0;
    }