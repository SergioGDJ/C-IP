/*
Escreva um programa para ler um valor inteiro N e que gere o quadrado de cada um dos valores pares,
de 1 até N, inclusive N, se for o caso1 .
*/
#include <stdio.h>
int main(){
    int n, i=2;
    printf("Digite o valor de n: ");
    scanf("%d",&n);
    while(i<=n){
        printf(" %d",i*i);
        i = i+2;
    }
    
}