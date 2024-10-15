#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
    int codcursoc;
    double valorPorCredito;
} typedef Curso;
struct{
    int codcurso;
    int numcred;
    double mensalidade;
} typedef Aluno;

int main() {
    int nCursos,i,j,len_c,len_a;
    char nome[500];
    scanf("%d",&nCursos);
    char **nomecurso;
    nomecurso=(char**)malloc(sizeof(char*)*nCursos);
    Curso vetorCurso[30];
    for (i = 0; i <nCursos; i++){
        scanf("%d",&vetorCurso[i].codcursoc);
        scanf("%lf ",&vetorCurso[i].valorPorCredito);
        scanf(" %[^\n]", nome);
        len_c=(strlen(nome))+1;
        nomecurso[i]=(char*)malloc(len_c*sizeof(char));
        strcpy(nomecurso[i],nome);
    }
    int nAlunos;
    scanf("%d",&nAlunos);
    char **nomealuno;
    nomealuno=(char**)malloc(sizeof(char*)*nAlunos);
    Aluno vetorAlunos[1000];
    for (i = 0; i <nAlunos; i++){
        scanf(" %[^\n]", nome);
        scanf("%d",&vetorAlunos[i].codcurso);
        scanf("%d",&vetorAlunos[i].numcred);
        len_a=(strlen(nome))+1;
        nomealuno[i]=(char*)malloc(len_a*sizeof(char));
        strcpy(nomealuno[i],nome);
        for(j=0;j<nCursos;j++){
            if(vetorAlunos[i].codcurso==vetorCurso[j].codcursoc){
            vetorAlunos[i].mensalidade= (double)vetorAlunos[i].numcred*vetorCurso[j].valorPorCredito;
            printf("Aluno(a): %s ",nomealuno[i]);
            printf("Curso: %s ",nomecurso[j]);
            printf("Num. Creditos: %d ",vetorAlunos[i].numcred);
            printf("Valor Credito: %.2lf ",vetorCurso[j].valorPorCredito);
            printf("Mensalidade: %.2lf\n",vetorAlunos[i].mensalidade);
            }
        }
    }
    for (i = 0; i <nCursos; i++){
        free(nomecurso[i]);
    }
    for (i = 0; i <nAlunos; i++){
        free(nomealuno[i]);
    }
    free(nomecurso);
    free(nomealuno);


    return 0;
}