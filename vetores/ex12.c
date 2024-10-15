#include<stdio.h>
int main(){
    //ordena lista
    int n,v[1000],i,j,k=1,temp;
    scanf("%d",&n);
    for (i=0; i<n; i++){
        scanf("%d",&v[i]);
    }
    for (i = 0; i<n; i++){
        for (j=k; j<n; j++){
        if (v[i]>v[j]){
            temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
        }
        k++;
    }
    for (i=0; i<n; i++)
    {
        printf("%d\n",v[i]);
    }
    
    return 0;
}