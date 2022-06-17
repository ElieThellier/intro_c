#include <stdio.h>

int main(){
    int i = 1;
    while (i<11){
        printf("%d\n",i);
        i=i+1;
    }

    for (int j=1; j<11;j=j+1){
        printf("%d\n",j);
    }

    return 0;
}