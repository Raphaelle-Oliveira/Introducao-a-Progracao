#include<stdio.h>
int main(){
    int x = 5;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;
    **ptr2 += 1;
    printf("%d", **ptr2);

    return 0;
}