#include<stdio.h>
int main(){
    int m,n,i,j,b=1,numeros;
    int a[10][10];

    do {
        scanf("%d", &m);
    } while (m<1 || m>10);

    do {
        scanf("%d", &n);
    } while (n<1 || n>10);
    
    for (i=0; i<m; i++){
        for (j=0; j<n; j++){
            scanf("%d",&a[i][j]);
        }
    }     
    for (i=0; i<m; i++){
    printf("linha %d:  ",b);
        for (j=0; j<1; j++)
        {
            printf("%d",a[i][j]);
        } 
        if(n==1) printf("\n");
        for (j=1; j<n; j++){
            printf(",%d",a[i][j]);
        }
        printf("\n");
    b++;
    }     

    return 0;
}