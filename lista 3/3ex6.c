#include<stdio.h>
int main(){
    int n,i;
    double x;
    x=0;
    scanf("%d",&n);

    if (n>1)
    {
        for (i = 1; i <=n; i++){
            x+=1/(double)i;
       }
        printf("%.6lf",x);
    }
    else printf("Numero invalido!");
    






    return 0;
}