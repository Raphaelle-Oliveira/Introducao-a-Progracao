#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    double erro,r=1,n,e;

    scanf("%lf%lf",&n,&erro);
    
    e=n+1;

    while(e>erro){
        r= ((r)+(n/(r)))/2;
        r= sqrt(r*r);
        e = n-(r*r);
        e= sqrt(e*e);
        printf("r: %.9lf err: %.9lf\n",r,e);
    }

    return 0;
}