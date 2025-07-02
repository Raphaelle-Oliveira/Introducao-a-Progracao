#include<bits/stdc++.h>

using namespace std;

int main(void){
    int i,j,k,tam,cont =0;
    string x;
    cin >> x;
    tam = x.length();
    for(i=0;i<tam;i++){
        if(x[i]=='A'){
            for(j=i+1;j<tam;j++){
                if(x[j]=='B'){
                    for(k=j+1;k<tam;k++){
                        if(j-i==k-j){
                            if(x[k]=='C'){
                                cont++;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << cont << endl;

    return 0;
}
