#include <stdio.h>
#include <math.h>
int main(){
    int i, n;
    double x, f, r;
    scanf("%lf\n%d", &x, &i);
    n = 1;
    f = 1;
    r = x;
        for (n; n <= i; n++)
        {
        f = (2 * n + 1) * (2 * n) * f;
        r = r + (pow(-1, n) * pow(x, 2 * n + 1)) / f;
        }
    printf("seno(%.2lf) = %lf\n",x,r);
    return 0;
}