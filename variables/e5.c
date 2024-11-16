/*
3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/
#include <stdio.h>
int main(){

    int a;
    printf("\n\nDigite um numero: ");
    scanf("%d", &a);

    if (a%2==0 || a%3==0 || a%5==0)
        printf("\n\tO numero e divisivel.\n");
    else
        printf("O numero nao e divisivel\n");

    return 0;
}