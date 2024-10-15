#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a;
    int b;
    b= 91;
    a=&b;
    printf("%p\n",&a);
    printf("%d\n",*a);
    printf("%d\n",a);
    int x,*p,y;
    y=0;
    p=&y;
    x=*p;
    x=4;
    (*p)++;
    x--;
    (*p)=(*p)+x;
    printf("y= %d\n",y);
    return 0;
}