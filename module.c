#include <stdio.h>

int addone(int x){
    return x+1;
}
int main(){
    int ans = addone(1);
    printf("%d\n",ans);
    return 1;
}