#include <stdio.h>

void print_tableau(int tab[],int len){
    for (int i=0; i<len; i++){
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int main(int n){
    printf("Afficher les entiers pairs jusqu'à ?\n");
    scanf("%d",&n);
    n=n/2;
    int tab[n];
    int j=0;
    for (int i=0;i<=2*n;i=i+2){
        tab[j]=i;
        j=j+1;
    }
    print_tableau(tab,n+1);
    return 0;
}
