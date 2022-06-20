#include <stdio.h>
#include <string.h>
#include "mylen.h"

int main(){
    int pomme = compter("pomme");
    printf("pomme est de longueur %d\n", pomme);

    int comparaison1 = compare_chaine("pareil", "egales");
    int comparaison2 = compare_chaine("pomme", "tomate");
    int comparaison3 = compare_chaine("rien", "");
    
    return 0;
}

int compter(char s[]){
    int len = strlen(s);
    return len;
}

int compare_chaine(char s[], char t[]){
    if (compter(s)==compter(t)){
        printf("'%s' et '%s' font la même taile\n",s,t);
        return 0;
    }
    if (compter(s)<compter(t)){
        printf("'%s' est plus petite que '%s'\n",s,t);
        return -1;
    }
    if (compter(s)>compter(t)){
        printf("'%s' est plus grande que '%s'\n",s,t);
        return 1;
    }
}