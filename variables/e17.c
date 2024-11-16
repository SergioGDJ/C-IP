/*
Faça um programa que calcule o valor de A, dado por:
A = 1 + 2 + 3 + 4 + ... + n, onde n é um número inteiro, maior que zero informado pelo usuário.
*/
#include <stdio.h>

int main(){
    int i=0, n, sum;

    printf("\neste programa calcula: A = 1 + 2 + 3 + 4 + ... + n\n");
    printf("\nDigite um valor de n\n");
    scanf("%d", &n);

    while(i<=n)
    {
        sum = sum + i;
        i+=1;
        
    }
    printf("\n%d,sum\n",sum);
}