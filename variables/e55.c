/*
3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1º elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11º. Imprima o vetor N
modificado.
*/
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
int main(){
    int vet1[20], vet2[20], i;
    srand(time(NULL));
    for(i=0; i<20; i++){
        vet1[i] = rand()%100;
    }
    for(i=0; i<20; i++){
        vet2[i] = vet1[19-i];
    }
    printf("LISTA 1:");
    for(i=0; i<20; i++){
        printf(" %2d",vet1[i]);
    }
    printf("\nLISTA 2:");
    for(i=0; i<20; i++){
        printf(" %2d",vet2[i]);
    }
}