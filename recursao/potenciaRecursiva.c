#include <stdio.h>
#include <stdlib.h>

long unsigned int potencia(int x, int n){
    if(n==0)
        return 1;
    else{
        return x*potencia(x, n-1);
    }
}

int main(){
    int x, n;
    scanf("%d%d", &x, &n);
    printf("%lu\n",potencia(x,n));
}