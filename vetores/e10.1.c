//Fazendo o exercicio 10 usando funcoes

#include <stdio.h>
#include <stdlib.h>

void AlocarVetor(int **vetor, int tam){
    *vetor = malloc(tam * sizeof(int));
}

void gravarVetor(int *vet, int tam){
    int i;
    for(i=0; i<tam; i++){
        scanf("%d", &(*(vet+i)));
    }
}

void printarVetor(int *v, int tam){
    int i;
    for(i=0; i<tam; i++){
        printf("%d ", *(v + i));
    }
}

void acharRepeticoes(int *vet, int tam, int *rep){
    int ultimo = *(vet + tam - 1);
    int i;
    *rep = 0;
    for(i=0; i<tam; i++){
        if(vet[i] == ultimo){
            (*rep)++;
        }
    }    
}

int acharMaior(int *vet, int tam, int *indice){
    int maior = vet[0], i;
    for(i=0; i<tam; i++){
        if(vet[i] > maior){
            maior = vet[i];
            *indice = i;
        }
    }
    return maior;
}

int main(){
    int *vet, i, n;
    int indice, repeticoes;
    scanf("%d", &n);
    int maior;

    AlocarVetor(&vet, n);
    gravarVetor(vet, n);
    //printarVetor(vet, n);
    acharRepeticoes(vet, n, &repeticoes);
    maior = acharMaior(vet, n, &indice);

    printf("Nota %d, %d vezes\nNota %d, indice %d\n", vet[n-1], repeticoes, maior, indice);

}