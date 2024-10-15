#include<stdio.h>
int main(){
    double a,b,c;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    
        if(a>=b && b>=c){
            printf("%.2lf",c); printf(",%.2lf",b); printf(",%.2lf\n",a);
        }
        if(a>=c && c>=b){
            printf("%.2lf",b); printf(",%.2lf",c); printf(",%.2lf\n",a);
        }
        if(b>=a && a>=c){
            printf("%.2lf",c); printf(",%.2lf",a); printf(",%.2lf\n",b);
        }
        if(b>=c && c>=a){
            printf("%.2lf",a); printf(",%.2lf",c); printf(",%.2lf\n",b);
        }
        if(c>=a && a>=b){
            printf("%.2lf",b); printf(",%.2lf",a); printf(",%.2lf\n",c);
        }
        if(c>=b && b>=a){
            printf("%.2lf",a); printf(",%.2lf",b); printf(",%.2lf\n",c);
        }
    return 0;
}