#include <stdio.h>
#include <stdlib.h>

void numeroDeDigitos(int soma, int *a){
    *a = 0;
    while(soma != 0){
        soma /= 10;
        (*a)++;
    }
}

void imprimir(int *vet, int tam){
    int i;
    for(i = 0; i < tam; i++){
        printf("%d", vet[i]);
    }
    printf("\n");
}

void alocar(int **vet, int tam){
    *vet = malloc(tam * sizeof(int));
    if(*vet == NULL){
        printf("Erro ao alocar memória.\n");
    }
}

int main(){
    int num1, num2;
    scanf("%d%d", &num1, &num2);
    int soma = num1 + num2, i = 0;
    numeroDeDigitos(soma, &i);
    
    int *vet, j;
    alocar(&vet, i);
    
    for(j = 0; j < i; j++){
        vet[i - j - 1] = (soma / (int)pow(10, j)) % 10;
    }
    
    int *vet1, k = 0;
    alocar(&vet1, i);
    
    for(j = 0; j < i; j++){
        if(vet[j] != 0){
            vet1[k] = vet[j];
            k++;
        }
    }
    
    imprimir(vet1, k);
    
    free(vet1);
    free(vet);
    
    return 0;
}