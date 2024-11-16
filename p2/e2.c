#include <stdio.h>
#include <stdlib.h>

void alocarVetor(int **vet, int *tam){
    scanf("%d", &(*tam));
    *vet = malloc((*tam) * sizeof(int));
    if(!(*vet)){
        printf("O vetor nao foi alocado corretamente");
    }
}

void preencherVetor(int *vet, int tam){
    int i;
    for(i=0; i<tam; i++){
        scanf("%d", &vet[i]);
    }
}

void printarVetor(int *vet, int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("%d ", vet[i]);
    }
}

void verificarElementoComum(int *vetcom, int *vet1, int *vet2, int *vet3, int tam1, int tam2, int tam3, int *a){
    int i, j, k;
    *a = 0;
    for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){
            for(k=0; k<tam3; k++){
                if(vet2[j] == vet3[k] && vet1[i] == vet2[j]){
                    vetcom[(*a)] = vet1[i];
                    (*a)++;
                }
            }
        }
    }
}

int main(){
    int *vet1, *vet2, *vet3, ecomum[1000], tamanho;
    int tam1, tam2, tam3;
    alocarVetor(&vet1, &tam1);
    preencherVetor(vet1, tam1);
    alocarVetor(&vet2, &tam2);
    preencherVetor(vet2, tam2);
    alocarVetor(&vet3, &tam3);
    preencherVetor(vet3, tam3);
    verificarElementoComum(ecomum, vet1, vet2, vet3, tam1, tam2, tam3, &tamanho);
    printarVetor(ecomum, tamanho);

    free(vet1);
    free(vet3);
    free(vet2);
       
}