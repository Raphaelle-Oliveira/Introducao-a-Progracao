#include<stdio.h>
int main(){
    int i,j;
    int m,n;
    
    scanf("%d",&m);
    scanf("%d",&n);

    for ( i = 1; i <= m; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (i>j)
            {
                if (j==1)
                {
                    printf("(%d,%d)",i,j);
                }
                else printf("-(%d,%d)",i,j);
                
            }
            
        }
        printf("\n");
    }
    




    return 0;
}