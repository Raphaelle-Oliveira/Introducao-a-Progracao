#include<stdio.h>
#include<string.h>
int main()
{
    int t1,t2,i;
    int len_t,compara=0;
    char string_1[1000],string_2[1000];
    scanf("%d",&t1);
    scanf(" %s",string_1);
    scanf("%d",&t2);
    scanf(" %s",string_2);
    len_t= strlen(string_1);
    for(i=0;i<len_t;i++){
        if(string_1[i]==string_2[i]){
            compara++;
        }
    }
    printf("%d\n",compara);
    return 0;
}