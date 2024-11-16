#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 0 1 1 2 3 5 8 13 
//O enesimo termo e o n-1 + n-2.

long unsigned int fibonacci(long unsigned int n){
    if(n==1)
        return 0;
    else{
        if (n==2)
            return 1;
        else{
            return fibonacci(n-1) + fibonacci(n-2);
        }
    }
}

int main(){
    clock_t t;
    t = clock();
    
    int n;
    printf("Digite um numero maior que zero: ");
    scanf("%d", &n);
    printf("O termo e: %lu\n", fibonacci(n));
    
    t = clock() - t;
    double time_taken = (double)t/CLOCKS_PER_SEC; ;
    printf("%.3lf", time_taken);
}