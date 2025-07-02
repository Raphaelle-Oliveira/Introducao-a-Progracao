#include<bits/stdc++.h>

using namespace std;

int main(void){
    int a,b,c;
    int aux = 0;
    cin >> a >> b >> c;
    if(a==b && b==c){
        cout << "Yes" << endl;
        return 0;
    }
    if(a>b){
        aux = a;
        a = b;
        b = aux;
    }
    if(a>c){
        aux = a;
        a = c;
        c = aux;
    }
    if(b>c){
        aux = b;
        b = c;
        c = aux;
    }

    if(a+b == c){
        cout << "Yes" << endl;
    }
    else{
        cout<< "No" << endl;
    }

    return 0;
}
