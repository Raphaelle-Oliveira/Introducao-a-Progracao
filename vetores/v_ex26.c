#include<stdio.h>

int main(){
    int T, V[9], i, j, k, total, total_falsos, f1, f2, aux, achou;

    scanf("%d", &T);
    for(k=0; k<T; k++){
        total = 0;
        achou = 0;
        for(i=0; i<9; i++){
            scanf("%d", &V[i]);
            total+=V[i];
        }
        total_falsos = total-100;
        for(i=0; i<8; i++){
            if(achou) break;

            for(j=1; j<9; j++){
                if(V[i]+V[j]==total_falsos){
                    f1 = V[i];
                    f2 = V[j];
                    achou = 1;
                    break;
                }
            }
        }

        for(i=0; i<8; i++){
            for(j=i+1; j<9; j++){
                if(V[j]<V[i]){
                    aux = V[i];
                    V[i] = V[j];
                    V[j] = aux;
                }
            }
        }

        for(i=0; i<9; i++){
            if(V[i]!=f1&&V[i]!=f2) printf("%d\n", V[i]);
        }
    }
    return 0;
}