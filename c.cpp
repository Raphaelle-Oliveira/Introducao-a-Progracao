#include<bits/stdc++.h>

using namespace std;

int main(void){
    int a,b;
    cin >> a >> b;
    if(a==1 && b!=1){
        cout << "Yes" << endl;
    }
    else if(b==1 && a!=1) {
        cout << "No" << endl;
    }
    else{
        cout << "Invalid" << endl;
    }
    return 0;
}
