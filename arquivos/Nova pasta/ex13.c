#include<stdio.h>
#include<string.h>
    struct departamento{
        char departamento[50];
        int quantidade;
        int anos_exist;
    };
    struct{
        char nome[50];
        int matricula;
        int anos_trab;
        struct departamento dep;
    }typedef Trabalho;
int main(){
    int n;
    int i;
    printf("digite o numero de trabalhadores da sua empresa = \n");
    do{
    scanf("%d",&n);
    }while(n>300);
    Trabalho Trabalhador[300];
    for(i=0;i<n;i++){
        printf("digite o nome completo do trabalhador %d = ",i+1);
        scanf(" %[^\n]",Trabalhador[i].nome);
        printf("digite o numero de matricula = ");
        scanf("%d",&Trabalhador[i].matricula);
        printf("digite a quantidade de anos trabalhados = ");
        scanf("%d",&Trabalhador[i].anos_trab);
        printf("digite o departamento = ");
        scanf(" %[^\n]",Trabalhador[i].dep.departamento);
        printf("digite a quantidades de funcionarios do departamento %s = ",Trabalhador[i].dep.departamento);
        scanf("%d",&Trabalhador[i].dep.quantidade);
        printf("digite quantos anos de existencia tem = ");
        scanf("%d",&Trabalhador[i].dep.anos_exist);
    }
    for(i=0;i<n;i++){
        printf("NOME = %s\n",Trabalhador[i].nome);
        printf("NUMERO DE MATRICULA = %d\n",Trabalhador[i].matricula);
        printf("ANOS TRABALHADOS = %d\n",Trabalhador[i].anos_trab);
        printf("DEPARTAMENTO = %s\n",Trabalhador[i].dep.departamento);
        printf("QUANTIDADE DE FUNCIONARIOS = %d\n",Trabalhador[i].dep.quantidade);
        printf("ANOS DE EXISTENCIA = %d\n",Trabalhador[i].dep.anos_exist);
        if(Trabalhador[i].anos_trab>=30){
            printf("%s PODE SOLICITAR APOSENTADORIA!\n",Trabalhador[i].nome);
        }
    }
    return 0;
}