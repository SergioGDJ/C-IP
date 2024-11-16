//3) Faça um programa que some os números ímpares entre 1 e 1000 e imprima a resposta
#include <stdio.h>
int main(){
    int i; 
    int sum = 0;

    for(i=1;i<=1000; i+=2){
        sum += i;
        printf("\n%d\n",sum);
    }
    printf("\n\n\nSOMA FINAL: %d\n\n\n", sum);
    return 0;
}