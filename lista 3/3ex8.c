#include<stdio.h>
int main(){
    int a,b,anos;
    anos=0;
    scanf("%d%d",&a,&b);

    for (a; a <= b;){
        a=a+((a*3)/100);
        b=b+((b*1.5)/100);
        anos++;
    }
    printf("ANOS = %d\n",anos);

    return 0;
}