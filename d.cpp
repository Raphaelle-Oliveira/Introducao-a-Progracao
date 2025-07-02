#include<bits/stdc++.h>

using namespace std;

int main(void){
    int a;
    cin >> a;
    if (a%4==0 && a%100!= 0){
        cout << 366 << endl;
    }
    else if(a%400 == 0){
        cout << 366 << endl;
    }
    else{
        cout << 365 << endl;
    }
    return 0;
}
