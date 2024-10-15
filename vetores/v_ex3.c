#include<stdio.h>
int main(){
    int n,i;
    scanf("%d",&n);
    int V[5000];
    for(i=0;i<n;i++){
        scanf("%d",&V[i]);
    }
    for(i=n-1;i>0;i--){
        printf("%d ",V[i]);
    }
    printf("%d\n",V[0]);

    return 0;
}