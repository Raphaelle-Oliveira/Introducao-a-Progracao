#include<stdio.h>
#include<string.h>
int main(){
    long long int a,b,c;
    int len_r,i,k;
    char result[50];
    while(1){
    scanf("%lld",&a);
    scanf("%lld",&b);
    if(a==0&&b==0) break;
        c=a+b;
        sprintf(result,"%lld",c);
        len_r=strlen(result);
        for(i=0;i<len_r;i++){
            if(result[i]=='0'){
                for (k=i; k<len_r; k++){
                result[k]=result[k+1];
               }
               len_r=len_r-1;
               i-=1;
            }
        }
        result[len_r]='\0';
        printf("%s\n",result);
    }
    return 0;
}