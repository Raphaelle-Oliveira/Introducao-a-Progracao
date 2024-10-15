#include <stdio.h>
int main(){

    int n, tmp, cont=1, nant, segLen=1, segMax=1;

    scanf("%d", &n);

    scanf("%d", &nant);
    if (n>=1){
     while(cont<n){
        scanf("%d", &tmp);
        if(tmp>nant){
            segLen++;
            if(segLen>segMax) segMax = segLen;
        }
        else{
            segLen=1;
        }
        nant=tmp;
        cont++;
     }
    }

    printf("O comprimento do segmento crescente maximo e: %d\n", segMax-1);

    return 0;
}