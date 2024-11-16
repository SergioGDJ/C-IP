//array de 10 elementos, imprimir os valores e a localizacao dos elementos

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void impressao(int *vet, int tam){
    for(int i=0; i < tam; i++){
        printf("O valor do %d elemento: %d\tseu endereco: %p\n", i, vet[i], &vet[i]);
    }
}

int main(){
    int vet[10];
    srand(time(NULL));
    for(int i=0; i<10 ; i++)
        vet[i] = rand()%100;
    impressao(vet, 10);
}