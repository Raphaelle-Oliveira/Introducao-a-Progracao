#include<stdio.h>
int main(){
int a,b,c,d,e,f,new1,new2;
int num,num2,i,n; //325
scanf("%d",&n);

for (i = 0; i < n; i++){
    scanf("%d",&num);
    scanf("%d",&num2);

    a= (num%1000-num%100)/100;
    b= (num%100-num%10)/10;
    c= num%10;

    d= (num2%1000-num2%100)/100;
    e= (num2%100-num2%10)/10;
    f= num2%10;

    new1 = (c*100) + (b*10) + a;
    new2 = (f*100) + (e*10) + d;

    if (new1>new2)
    {
        printf("%d\n",new1);
    }
    else printf("%d\n",new2);
    
}

return 0;
}