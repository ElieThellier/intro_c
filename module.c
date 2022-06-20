#include <stdio.h>

#include "module.h"

int main(){
    int ans = addone(1);
    printf("%d\n",ans);
    return 0;
}

int addone(int x){
    return x+1;
}