/*
Escreva um programa em C para armazenar n valores inteiros em um vetor, e depois imprimi-los na
ordem inversa a qual foram lidos.
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int vetor[n]; //tamanho do vetor: n
    int i; //contador
    for(i=0; i<n; i++)
        scanf("%d", &vetor[i]);
    for(i=n-1; i>=0; i--)
        printf("%d ",vetor[i]);
}