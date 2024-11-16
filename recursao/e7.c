#include<stdio.h>
#include<stdlib.h>

int pisoDoLog2(int x){
    if(x==1){
        return 0;
    }
    if(x/2 == 0){
        return 1;
    }
    if(x/2 != 0){
        return 1 + pisoDoLog2(x/2);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int x;
        scanf("%d", &x);
        printf("%d\n", pisoDoLog2(x));
    }
}