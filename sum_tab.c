#include <stdio.h>

int main(int t[],int u[], int len){
    int res[len];
    for (int i=0;i<len;i=i+1){
        res[i]=t[i]+u[i];
    }
    return 1;
}