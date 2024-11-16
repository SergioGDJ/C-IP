/*
7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.
*/

#include <stdio.h>

int main(){
    int n, k=0;
    printf("\nDigite o valor de n\n");
    scanf("%d",&n);
    while (k <=n)
    {
        printf("\n%d\n",k*k);
        k +=2;

    }
   


}