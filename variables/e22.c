/*
15) Faça um programa que peça ao usuário dois números inteiros e apresente o resultado na
multiplicação entre os dois números sem utilizar a operação de multiplicação.
*/
#include <stdio.h>
int main(){
    int a, b, i, r=0;
    printf("\nDigite 2 numeros para serem multiplicados\n");
    scanf("%d%d", &a, &b);

    for(i=1; i<=b; i++){
        r = a+r;
    }
    //5 X 4 =  5 + 5 + 5 + 5
    printf("\n%d\n",r);
}