#include<stdio.h>
int main(){
    int i,j,temp,num_meio,num_meio2,tam;
    double mediana;

    scanf("%d",&tam);
    int vet[tam];
    for ( i = 0; i < tam; i++){
        scanf("%d",&vet[i]);
    }
    for ( i = 0; i < tam-1; i++){
        for(j=i+1; j < tam;j++){
            if(vet[i] > vet[j]){
                temp = vet[i];
                vet[i]=vet[j];
                vet[j]=temp;
            }
        }
    }     
    if(tam%2!=0){
        mediana=vet[(int)(tam/2)];
    }
    else{
        num_meio=vet[(int)(tam/2)-1];
        num_meio2=vet[(int)(tam/2)];
        mediana=(double)(num_meio+num_meio2)/2;
    }
    printf("%.2lf",mediana);

    return 0;  
}