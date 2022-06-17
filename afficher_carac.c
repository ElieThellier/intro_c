#include <stdio.h>

int main(){
    printf("Entrez la chaîne de caractère à afficher :\n");
    char mot[50];
    scanf("%[^\n]",mot);
    printf("%s\n",mot);
    return 1;
}