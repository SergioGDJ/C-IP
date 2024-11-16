/*
1) Faça um programa que preencha um vetor de inteiros de tamanho 10 pedindo valores ao usuário.
Em seguida, calcule e salve num segundo vetor o quadrado de cada elemento do primeiro vetor. Por
fim, imprima os dois vetores.
*/

#include <stdio.h>

int main(){
    int vet1[10], vet2[10], i; //vetor 1, com 10 espacos. indices de 0 a 9, totalizando as 10 posicoes.
    for(i=0; i<10; i++){
        scanf("%d", &vet1[i]); //salvando o valor digitado no teclado em cada posicao da lista vet1.
        vet2[i] = vet1[i]*vet1[i];
    }
    for(i=0; i<10; i++){
        printf("%d ",vet1[i]);
    }
    printf("\n");
    for(i=0; i<10; i++){
        printf("%d ",vet2[i]);
    }

}