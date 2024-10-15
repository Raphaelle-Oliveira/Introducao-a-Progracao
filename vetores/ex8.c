#include<stdio.h>
int main(){
    int num=0,i,j,v[128];

    while(scanf("%d", &num) != EOF)
    { 
        j = 0;
        if(num==0){
            printf("0");
        }
        while(num != 0){
            if(num%2 == 0){
                v[j] = 0;
                j++;
            }
            else if(num%2==1){
                v[j] = 1;
                j++;
            }
            num/=2;
            if(num==1){
                v[j]=1;
                j++;
                break;
            }
        }
        for(i = j; i > 0; i--){
            printf("%d", v[i]);
        }
        printf("\n");
    }    
    return 0;
}
