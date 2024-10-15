#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct {
    int codcursoc;
    double valorPorCredito;
    char nomec[100];
} typedef Curso;
struct{
    char nome[500];
    int codcurso;
    int numcred;
    double mensalidade;
} typedef Aluno;

int main() {
    int nCursos,i,j;
    scanf("%d",&nCursos);
    Curso vetorCurso[30];
    for (i = 0; i <nCursos; i++){
        scanf("%d",&vetorCurso[i].codcursoc);
        scanf("%lf ",&vetorCurso[i].valorPorCredito);
        scanf("%[^\n]", vetorCurso[i].nomec);
    }
    int nAlunos;
    scanf("%d",&nAlunos);
    Aluno vetorAlunos[1000];
    for (i = 0; i <nAlunos; i++){
        scanf(" ");
        scanf("%[^\n]", vetorAlunos[i].nome);
        scanf("%d",&vetorAlunos[i].codcurso);
        scanf("%d",&vetorAlunos[i].numcred);
        for(j=0;j<nCursos;j++){
            if(vetorAlunos[i].codcurso==vetorCurso[j].codcursoc){
            vetorAlunos[i].mensalidade= (double)vetorAlunos[i].numcred*vetorCurso[j].valorPorCredito;
            printf("Aluno(a): %s ",vetorAlunos[i].nome);
            printf("Curso: %s ",vetorCurso[j].nomec);
            printf("Num. Creditos: %d ",vetorAlunos[i].numcred);
            printf("Valor Credito: %.2lf ",vetorCurso[j].valorPorCredito);
            printf("Mensalidade: %.2lf\n",vetorAlunos[i].mensalidade);
            }
        }
    }
    return 0;
}