/*
3) Escrever um programa que lê um vetor N de tamanho 20 e o imprime na tela. Em seguida, troque
o 1º elemento com o último, o 2ª com o penúltimo, ... até o 10ª com o 11º. Imprima o vetor N
modificado.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vet[20], i, copia;
    for(i=0; i<20; i++)
        scanf("%d", &vet[i]);
    printf("VETOR ORIGINAL:");
    for(i=0; i<20; i++)
        printf(" %d",vet[i]);
    
    for(i=0; i<10; i++){
        copia = vet[i];
        vet[i] = vet[19-i];
        vet[19-i] = copia;
    }
    printf("\nVETOR MODIFICADO:");
    for(i=0; i<20; i++)
        printf(" %d",vet[i]);
    
}