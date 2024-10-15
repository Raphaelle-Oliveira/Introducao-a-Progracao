#include <stdio.h>
#include <math.h>

int calcula_pot(int n, int p){ //Função que calcula a potencia de p mais próximo a n.
    int pot=1, i=1, k; // pot = calculo da potencia atual, poa =  calculo da potencia anterior, i = base da potência, k = base da potência anterior.
    
    while(pot<= n) {
        k = i; //coloco o k para atualizar o valor de i antes para que quando o valor pot ultrapassar n, k ser a ultima base antes a não ultrapassar ou igualar.
        i++;
        pot = pow(i,p);
    }

    int pot 2;
    return k;
}


int main () {
    int n, p, k;
    scanf("%d %d", &n, &p);

    k = calcula_pot(n, p);

    printf("%d -> %d^%d = %d", n, k, p, pow(k,p));

    return 0;
}