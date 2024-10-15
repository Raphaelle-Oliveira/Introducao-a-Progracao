#include<stdio.h>
int main(){
    int num, check = 1, fator, i;

    while (check){
        scanf("%d",&num);
        if (num<=1)
        {
            printf("Fatoracao nao e possivel para o numero %d!\n",num);
        }
        else{
            printf("%d = ",num);
            fator = 2;
            while(num%fator!=0){
                fator++;
                for(i=2; i<fator; i++){
                    if(fator%i==0){
                        fator++;
                    }
                }
            }
            num = num/fator;
            printf("%d",fator);

            while(num > 1){
                if(num%fator==0){
                    num = num/fator;
                    printf(" x %d",fator);
                }
                else{
                    fator++;
                    for(i=2; i<fator; i++){
                        if(fator%i==0){
                            fator++;
                        }
                    }
                }
            }
            
            check = 0;
        }
        
    }

    return 0;
}