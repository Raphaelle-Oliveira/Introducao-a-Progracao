#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    int n,i,j,len_a,soma;
    char a[101];
    scanf("%d",&n);
    for(j=0;j<n;j++){
        soma=0;
        scanf("%s", a);
        //printf("%s",a);
        len_a=strlen(a);
        //printf("%d\n",len_a);
        for(i=0;i<len_a;i++){
            if(a[i]=='1'){
                soma+=2;
            }
            if(a[i]=='7'){
                soma+=3;
            }
            if(a[i]=='4'){
                soma+=4;
            }
            if(a[i]=='2'){
                soma+=5;
            }
            if(a[i]=='3'){
                soma+=5;
            }
            if(a[i]=='5'){
                soma+=5;
            }
            if(a[i]=='6'){
                soma+=6;
            }
            if(a[i]=='9'){
                soma+=6;
            }
            if(a[i]=='0'){
                soma+=6;
            }
            if(a[i]=='8'){
                soma+=7;
            }
        } 
    printf("%d leds\n",soma);
    }
    return 0;
}