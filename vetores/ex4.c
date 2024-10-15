#include<stdio.h>
int main(){
    int n,v[5000],i;
    scanf("%d",&n);
    for (i = 0; i <n; i++)
    {
        scanf("%d",&v[i]);
    }
    for (i = 0; i<n-1; i++)
    {
        printf("%d ",v[i]);
    }
    printf("%d\n",v[n-1]);
    return 0;
}