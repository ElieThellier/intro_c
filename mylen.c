#include <stdio.h>
#include <string.h>
#include "mylen.h"
#include <stdbool.h>
#include <stdlib.h>

int main(){
    int pomme = compter("pomme");
    printf("pomme est de longueur %d\n", pomme);

    int comparaison1 = compare_chaine("pareil", "egales");
    int comparaison2 = compare_chaine("pomme", "tomate");
    int comparaison3 = compare_chaine("rien", "");
    
    int palin1 = ispalindrome("pomme");
    int palin2 = ispalindrome("kayak");
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
    else if (compter(s)<compter(t)){
        printf("'%s' est plus petite que '%s'\n",s,t);
        return -1;
    }
    else if (compter(s)>compter(t)){
        printf("'%s' est plus grande que '%s'\n",s,t);
        return 1;
    }
}

int ispalindrome(char s[]){
    int i=0;
    int len=strlen(s);
    for (i=0;i<len/2;i++){
        if (s[i]!=s[len-i-1]){
            printf("'%s' n'est pas un palindrome\n", s);
            return 0;
        }
    printf("'%s' est un palindrome\n", s);
    return 1;
    }
}