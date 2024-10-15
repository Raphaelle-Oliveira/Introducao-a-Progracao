#include<stdio.h>
int main(){
    int num;
    int a,b,c,d,e;
    scanf("%d",&num);

    a = (num%100000-num%10000)/10000;
    b = (num%10000-num%1000)/1000;
    c = (num%1000-num%100)/100;
    d = (num%100-num%10)/10;
    e = num%10;

    if(num>= 100000){
        printf("NUMERO INVALIDO\n");
        return 0;
    }
    else if(num>=10000){
        a = (num%100000-num%10000)/10000;
        b = (num%10000-num%1000)/1000;
        c = (num%1000-num%100)/100;
        d = (num%100-num%10)/10;
        e = num%10;
        if(a==e && b==d) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(num>=1000){
        a = (num%10000-num%1000)/1000;
        b = (num%1000-num%100)/100;
        c = (num%100-num%10)/10;
        d = num%10;
        if(a==d && b==c) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(num>=100){
        a = (num%1000-num%100)/100;
        b = (num%100-num%10)/10;
        c = num%10;
        if(a==c) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(num>=10){
        a = (num%100-num%10)/10;
        b = num%10;
        if(a==b) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
    }
    else if(num>=0){
        printf("PALINDROMO\n");
    }
    
    return 0;
}