#include <bits/stdc++.h>

using namespace std;

int main(){
    // 65-90
    //+32
    string x;
    int tam;
    cin >> x;
    tam = x.length();
    for(int i=0;i< tam;i++){
        if(x[i]>=65 && x[i]<=90){
            x[i]+=32;
        }
        if(x[i]!='a' && x[i]!='e' && x[i]!='i' && x[i]!='o' && x[i]!='u' && x[i]!='y' ){
            cout<< "." << x[i];
        }
    }
    return 0;
}
