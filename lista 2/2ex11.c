#include <stdio.h>
#include <math.h>
 
int main(){
 
    double a,b,c;
    double x1,x2,delta;
 
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
 
    delta = (b*b) - (4*a*c);
 
    if(delta<0){
        printf("RAIZES IMAGINARIAS\n");
    }
    else{
        delta = sqrt(delta);
        x1 = ((-b)-delta)/(2*a);
        x2 = ((-b)+delta)/(2*a);
        
        if (delta==0){
            printf("RAIZ UNICA\n");
            printf("X1 = %.2lf\n", x1);
        }
        else{
            printf("RAIZES DISTINTAS\n");
            printf("X1 = %.2lf\n", x1);
            printf("X2 = %.2lf\n", x2);
        }
    }
 
    return 0;
}