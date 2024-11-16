/*
2) Faça um programa que some o conteúdo de dois vetores de tamanho 25 e armazene o resultado
em um terceiro vetor. Imprima os três vetores na tela.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i = 0, l1[25], l2[25], l3[25];
    srand(time(NULL)); 

    // Preencha os arrays l1 e l2 com números aleatórios e calcule l3
    for (i = 0; i < 25; i++) {
        l1[i] = rand();
        l2[i] = rand();
        l3[i] = l1[i] + l2[i];
    }

    // Imprima os arrays l1, l2 e l3
    printf("l1: ");
    for (i = 0; i < 25; i++) {
        printf("%d ", l1[i]);
    }
    printf("\n");

    printf("l2: ");
    for (i = 0; i < 25; i++) {
        printf("%d ", l2[i]);
    }
    printf("\n");

    printf("l3: ");
    for (i = 0; i < 25; i++) {
        printf("%d ", l3[i]);
    }
    printf("\n");

    return 0;
}
