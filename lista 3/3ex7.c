#include<stdio.h>
int main(){
    int i = 0;
    int matricula = 0;
    do{
    scanf("%d",&matricula);
    double p1,p2,p3,p4,p5,p6,p7,p8;
    scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&p1,&p2,&p3,&p4,&p5,&p6,&p7,&p8);
    double l1,l2,l3,l4,l5;
    scanf("%lf %lf %lf %lf %lf",&l1,&l2,&l3,&l4,&l5);
    double t;
    scanf("%lf",&t);
    double MP,ML,MF;
    double frequencia;
    scanf("%lf",&frequencia);

    MP= (p1+p2+p3+p4+p5+p6+p7+p8)/8;
    ML= (l1+l2+l3+l4+l5)/5;
    MF= (0.7*MP)+(0.15*ML)+(0.15*t);

    if (matricula != -1){
        if (frequencia>=96 && MF>= 6) 
        {
           printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n",matricula,MF);
        }
        if (frequencia<96 && MF>= 6) 
        {
           printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n",matricula,MF);
        }
        if (frequencia>=96 && MF< 6) 
        {
           printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n",matricula,MF);
        }
        if (frequencia<96 && MF< 6) 
        {
           printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n",matricula,MF);
        }

        }
    }while(matricula != -1); 

    return 0;
}