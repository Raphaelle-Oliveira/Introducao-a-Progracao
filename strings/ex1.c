#include<stdio.h>
#include<string.h>
int main(){
    char a[51], b[51], juntos[101];
    int n,i,j,k,len_a,len_b,m;
    scanf("%d",&n);
        for (j=0; j<n; j++){
        k = 0;
        scanf(" %s", a);
        scanf("%s", b);
        len_a=strlen(a);
        len_b=strlen(b);
        
        for (i=0; i<len_a && i<len_b; i++){
        	juntos[k] = a[i];
        	k++;
        	juntos[k] = b[i];
        	k++;
        }
        if (len_a > len_b){
        	for(i = len_b; a[i] != '\0'; i++){
        		juntos[k] = a[i];
        		k++;
        	}
        }
        else if (len_b > len_a){
        	for(i = len_a; b[i] != '\0'; i++){
        		juntos[k] = b[i];
        		k++;
        	}
        }
        juntos[k] = '\0';
        printf("%s\n", juntos);
    }
    return 0;
}