//distancia entre dois elementos usando funcao
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void alocarVetor(int **vetor, int tam){
    *vetor = malloc(tam * sizeof(int));
}

void gravarVetor(int *vet, int tam){
    for(int i = 0; i<tam; i++)
        scanf("%d", &vet[i]);
}

int calculoMenorDistancia(int *vet, int *contador, int tam){
    int i, j, distancia, menordistancia = INT_MAX;

    for(i=0; i<tam; i++){
        for(j=(i+1); j<tam; j++){
            distancia = vet[i] - vet[j];
            if(distancia < 0)
                distancia = - distancia;
            if(distancia < menordistancia)
                menordistancia = distancia; 
            ++(*contador);
        }
        
    }
    return menordistancia;   
}

int main(){
    int a, t=0;
    scanf("%d", &a);
    do{
        int *vet, n, count = 0, menordistancia;
        scanf("%d", &n);
        alocarVetor(&vet, n);
        gravarVetor(vet, n);
        menordistancia = calculoMenorDistancia(vet, &count, n);
        printf("%d %d\n", menordistancia, count);
        free(vet);
        t++;
    }while(t < a);
}