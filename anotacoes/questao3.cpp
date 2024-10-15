#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main(){
    int num, carimbadas, compradas;
    int *fig_carimbadas,*fig_compradas;
    int *total;
    int faltam;
    int i,j;

    cin>> num >>  carimbadas >> compradas;

    faltam = carimbadas;

    total = (int*) malloc(sizeof(int)*num);
    fig_carimbadas = (int*) malloc(sizeof(int)*carimbadas);
    fig_compradas = (int*) malloc(sizeof(int)*compradas);

    for(i=0; i<carimbadas;i++){
        cin>>fig_carimbadas[i];
    }
    for(i=0; i<compradas;i++){
        cin>>fig_compradas[i];      
    }
    
    for(i=0;i<carimbadas;i++){
        for(j=0;j<compradas;j++){
            if(fig_carimbadas[i]==fig_compradas[j]){
                faltam--;
                fig_carimbadas[i] = num+1;
                break;
            }
        }
    }
    
    cout<< faltam;
    
    return 0;
}