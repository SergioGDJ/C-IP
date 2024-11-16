#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, *vet;
    vet = malloc(5 * sizeof(int));
    printf("endereco de vet: %p\n", &vet);
    printf("endereco de *vet: %p\n", &(*vet));
    for(i=0; i<5; i++)
        printf("%p ", &vet[i]);
}