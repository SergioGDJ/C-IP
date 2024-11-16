#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void alocacaoEgravacao(int **vetor) {
    int i;
    srand(time(NULL));
    *vetor = malloc(4* sizeof(int));
    for(i=0; i<4; i++)
    (*vetor)[i] = rand()%100;
}

int main(){
    int *vet, i;
    alocacaoEgravacao(&(vet));
    for(i=0; i<4; i++)printf("%d ", vet[i]);
    
}