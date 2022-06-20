#include <stdio.h>

#include "fibonacci.h"

int main(int n){
    printf("Entrez l'indice du nombre de la suite de Fibonacci voulu :");
    scanf("%d",&n);
    printf("Le %d-ème nombre de la suite de Fibonacci est %d\n",n , fibo(n));
    return 0;
}

int fibo(int n){
    int F[n];
    F[0] = 0;
    F[1] = 1;
    for (int i=2;i<=n;i=i+1){
        F[i]=F[i-2]+F[i-1];
    }
    return F[n];
}
