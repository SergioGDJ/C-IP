//e13 usando funcoes
#include<stdio.h>
#include<stdlib.h>

void alocarVetor(int **vetor, int tam){
    int i;
    for(i=0; i<tam; i++)
        *vetor = malloc(tam * sizeof(int)); 
}

void gravarVetor(int *v, int tam){
    int i;
    for(i=0; i<tam; i++)
        scanf("%d", &(*(v + i)));
}

void maiorFrequencia(int *v, int *mf, int *f, int tam){
    int i, j, count=0;
    *mf = v[0];
    *f = 0;
    for(i=0; i<tam; i++){
        count = 0;
        for(j=0; j<tam; j++){
            if(v[i] == v[j]){
                count++;
            }
        }
        if(count > *f){
            *f = count;
            *mf = v[i];
        }
        if(count == *f && v[i] < *mf){
            *mf = v[i];
        }
    }
}

int main(){
    int *vet, i, n, valor_maior_frequencia, frequencia;
    scanf("%d", &n);
    alocarVetor(&vet, n);
    gravarVetor(vet, n);
    maiorFrequencia(vet, &valor_maior_frequencia, &frequencia, n);
    printf("%d\n%d", valor_maior_frequencia, frequencia);
}