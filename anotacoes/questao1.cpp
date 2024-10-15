#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int a,b,c;

    cin>> a>>b>>c;

    if(a%2!=0){
        if((b+c)%2!=0){
            cout<< 0;
        }
        else{
            cout<< 1;
        }
    }
    else{
         if((b+c)%2!=0){
            cout<< 1;
        }
        else{
            cout<<0;
        }
    }
    return 0;
}
