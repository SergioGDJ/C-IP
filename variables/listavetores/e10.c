#include <stdio.h>
#include <stdlib.h>

int main() {
    int n; // numero de notas
    scanf("%d", &n);
    int vet[n]; // lista com n notas

    int i; // contador
    for(i = 0; i < n; i++) {
        scanf("%d", &vet[i]);
    } // gravar o vetor vet[n]

    int count = 0;
    for(i = 0; i < n; i++) {
        if(vet[i] == vet[n-1]) { // Comparar com cada nota
            count++;
        }
    }

    int maiornota = vet[0], posicaomaior = 0;

    for(i = 1; i < n; i++) { // Começar a verificar a partir do segundo elemento
        if(vet[i] > maiornota) {
            maiornota = vet[i];
            posicaomaior = i;
        }
    }
    printf("Nota %d, %d vezes\nNota %d, indice %d\n", vet[n-1], count, maiornota, posicaomaior);
    return 0;
}