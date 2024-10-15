#include<stdio.h>

int main()
{
    int total_alunos, E, N; //E=querem estar no mesmo grupo, N = nao querem;
    int i,j,restricoes;
    scanf("%d",&total_alunos);
    scanf("%d",&E);
    scanf("%d",&N);
    int duplas_E,duplas_N,grupos;
    duplas_E= E*2;
    duplas_N=N*2;
    grupos= total_alunos/3;
    int E_a[duplas_E];
    int N_a[duplas_N];
    int trio[total_alunos];
    int total_duplas;
    total_duplas= duplas_E+duplas_N;

    for(i=0;i<(duplas_E);i++){
        scanf("%d",&E_a[i]);
    }
    for(i=0;i<(duplas_N);i++){
        scanf("%d",&N_a[i]);
    }
    
    for(i=0;i<grupos;i++){
        scanf("%d %d %d",&trio[i],&trio[i+1],&trio[i+2]);
        i+=2;
    }



    return 0;
}