#include<stdio.h>
int main(){
    int V[5000],i,n,soma=0;
    scanf("%d",&n);
    for (i = 0; i <n; i++)
    {
        scanf("%d",&V[i]);
        soma+=V[i];
    }
    printf("%d\n",soma);

    return 0;
}