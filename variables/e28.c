/*
Escreva um programa para ler um número de três dígitos e imprimir o número invertido
*/
#include <stdio.h>
int main(){
    int num, c=0, d=0, u=0, r=0;
    scanf("%d", &num);
    u = num%10;
    d = (num/10)%10;
    c = (num/100)%10;

    r = c + 10*d + 100*u;
    printf("%d",r);

}