#include <stdio.h>
#include "pairs100.h"

int main(){
    printf("Afficher les entiers pairs jusqu'à ?\n");
    int n;
    scanf("%d",&n);
    n=n/2;
    int tab[n];
    int j=0;
    for (int i=0;i<=2*n;i=i+2){
        tab[j]=i;
        j=j+1;
    }
    print_tableau(tab,j);
    return 0;
}

void print_tableau(int tab[],int len){
    for (int i=0; i<len; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}