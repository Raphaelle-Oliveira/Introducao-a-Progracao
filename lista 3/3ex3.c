#include<stdio.h>
int main(){
    int i, N, q;
    scanf("%d",&N);

    for (i = 2; i <=N; i++)
    {
        if (i%2==0)
        {
            q=i*i;
            printf("%d^2 = %d\n", i, q);
        }
        
    }
    
    return 0;
}