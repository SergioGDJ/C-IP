#include<stdio.h>
#include<stdlib.h>

int orelhasCoelhos(int n){  //orelhas(3)  --> 2 + 5) --> 3 + 2 --- 2
    if(n==1){
        return 2;
    }
    else{
        if(n%2==0){
            return 3 + orelhasCoelhos(n-1);
        }
        else
            return 2 + orelhasCoelhos(n-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int x;
        scanf("%d", &x);
        printf("%d\n", orelhasCoelhos(x));
    }
}