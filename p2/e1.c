//Troca Opostos
#include <stdio.h>
#include <stdlib.h>

void alocarvet(int **vet, int tam){
    *vet = malloc(tam * sizeof(int));
    if(!(*vet)){
        printf("O Vetor nao foi alocado corretamente");
    }
}

void gravarVet(int *vet, int tam){
    int i;
    for(i=0; i<tam; i++){
        scanf("%d", &vet[i]);
    }
}

void troca(int *vet, int tam, int i){
    //Funcao que troca o i com o j
    int copia;
    int j = (tam - i - 1);
    
    copia = vet[i];
    vet[i] = vet[j];
    vet[j] = copia;
}

void printarVetor(int *vet, int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("%d ", vet[i]);
    }
}

void trocaOpostosSeMaior(int *vet, int tam){
    int i;
    for(i=0; i<tam/2; i++){
        if(vet[i] > vet[tam-i-1]){
            troca(vet, tam, i);
        }
    }
}

int main(){
    int *vet, tam;
    scanf("%d", &tam);
    alocarvet(&vet, tam);
    gravarVet(vet, tam);
    trocaOpostosSeMaior(vet, tam);
    printarVetor(vet, tam);
    free(vet);
}