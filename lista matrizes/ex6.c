#include<stdio.h>
int main(){
    double a,b,c,d;
    double new_a,new_b,new_c,new_d;

    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    new_a= (a*a)+(b*c);
    new_b= (a*b)+(b*d);
    new_c= (c*a)+(d*c);
    new_d= (c*b)+(d*d);

    printf("%.3lf %.3lf\n%.3lf %.3lf\n",new_a,new_b,new_c,new_d);

    return 0;
}