#include<stdio.h>
int main(){
    int num;
    int a,b,c,d;
    scanf("%d",&num);
    a =  (num%10000-num%1000)/1000;
    b = (num%1000-num%100)/100;
    c = (num%100-num%10)/10;
    d = num%10;

     if (num >= 10000) {
        printf("Numero invalido! \n");
     }
     else 

    if(num < 10000 && num >= 1000){
    switch ('a')
    {
    
    case 'a'==1:
    printf("quarta ordem %d",num);printf(" = %d",a);printf(" unidade de milhar ");
        break;
        default:
    printf("quarta ordem %d",num);printf(" = %d",a);printf(" unidades de milhar ");
    break;
    }
    switch ('b')
    {
    case 'b'==1:
        printf("%d",b);printf(" centena ");
        break;
    
    default:
        printf("%d",b);printf(" centenas ");
        break;
    }
    switch ('c')
    {
    case 'c'==1:
        printf("%d",c );printf(" dezena ");
        break;
    
    default:
        printf("%d",c );printf(" dezenas ");
        break;
    }
    switch ('d')
    {
    case 'd'==1:
        printf("%d",d );printf(" unidade \n");
        break;
    
    default:
        printf("%d",d );printf(" unidades \n");

        break;
    }
    }
    if(num < 1000 && num >= 100){

    b = (num%1000-num%100)/100;
    c = (num%100-num%10)/10;
    d = num%10;

    switch ('b')
    {
    case 'b'==1:
        printf("terceira ordem %d",b);printf(" centena ");
        break;
    
    default:
        printf("terceira ordem %d",b);printf(" centenas ");
        break;
    }
    switch ('c')
    {
    case 'c'==1:
        printf("%d",c );printf(" dezena ");
        break;
    
    default:
        printf("%d",c );printf(" dezenas ");
        break;
    }
    switch ('d')
    {
    case 'd'==1:
        printf("%d",d );printf(" unidade \n");
        break;
    
    default:
        printf("%d",d );printf(" unidades \n");
        break;
    }

    }

    if(num < 100 && num >= 10){

    c = (num%100-num%10)/10;
    d = num%10;

    switch ('c')
    {
    case 'c'==1:
        printf("segunda ordem %d",c );printf(" dezena ");
        break;
    
    default:
        printf("segunda ordem %d",c );printf(" dezenas ");
        break;
    }
    switch ('d')
    {
    case 'd'==1:
        printf("%d",d );printf(" unidade \n");
        break;
    
    default:
        printf("%d",d );printf(" unidades \n");
        break;

    }

    }
    if(num < 10 && num >= 1){

    d = num%10;

    switch ('d')
    {
    case 'd'==1:
        printf("primeira ordem %d",d );printf(" unidade \n");
        break;
    
    default:
        printf("primeira ordem %d",d );printf(" unidades \n");
        break;

    }

    }

    return 0;
}