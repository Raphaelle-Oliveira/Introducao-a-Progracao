#include<stdio.h>
int main(){
    int v[1000],n,k,i,m_k=0;
    do{
        scanf("%d",&n);
    }while(n<=0);
    
    for(i=0;i<n;i++){
    scanf("%d",&v[i]);
    }
    scanf("%d",&k);
    for (i=0; i<n; i++){
        if(v[i]>=k){
            m_k+=1;
        }
    }
    printf("%d",m_k);
    return 0;
}
