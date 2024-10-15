#include<stdio.h>
int main(){
    int x,y,z,i, soma;
    scanf("%d %d %d",&x,&y,&z);

    for (i = 0; i < z; i++){
        soma+=x;    
        x+=y;
    }
    printf("%d",soma);
    return 0;
}