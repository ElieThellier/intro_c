#include <stdio.h>
#include <string.h>

int compter();
int compter(){
    printf("Entrez la chaîne de caractère dont vous voulez compter le nombre de caractère :\n");
    char s[50];
    scanf("%[^\n]",s);
    int len = strlen(s);
    printf("%d\n",len);
}

int main(){
    compter();
    return 0;
}
