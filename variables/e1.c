/*
Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.
*/

#include <stdio.h>

int main(){
    int a, b, c, d, e, negativos, positivos = 0, valor=0;

    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a>0){
        positivos++;
    }
    else 
        negativos++;
    if (b>0){
        positivos++;
    }
    else 
        negativos++;
    if (c>0)
        positivos++;
    else 
        negativos++;
    if (d>0)
        positivos++;
    else 
    negativos++;
    if (e>0)
        positivos++;
    else
        negativos++;
    
    printf("\n\nPOSITIVOS: %d\t NEGATIVOS:%d\n", positivos, negativos);


    return 0;
}