#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int a,b,a2,b2;

    cin>> a>>b>>a2>>b2;

    if(a==a2 && b==b2){
        cout<< 0;
    }
    else if(a!=a2 && b==b2){
        cout<< 1;
    }
    else if(a==a2 && b!=b2){
        cout<< 2;
    }
    else{
        cout<<1;
    }
    
    return 0;
}