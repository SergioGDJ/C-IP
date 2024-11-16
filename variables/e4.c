/*
2) Escreva um programa em C que lê 5 números inteiros, um por vez. Conte quantos destes valores
são negativos e quantos são positivos. Ao final, imprima na tela a quantidade de números negativos
e positivos.
*/

#include <stdio.h>
int main(){
    
    int a, b, c, d, e, negativos=4, positivos=0;
    printf("Digite 5 numeros inteiros: \n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    if (a>0)
        positivos++ && negativos--; //1 3
    if (b>0)
        positivos++ && negativos--;  //2 2
    if (c>0)
        positivos++ && negativos--; // 3 1
    if (d>0)
        positivos++ && negativos--; // 4 0
    if (e>0)
        positivos++ && --negativos; // 5 -1

    printf("\n\n(%d,%d)\n\n", positivos, negativos);

    


return 0;
}