//funcao recursiva que retorna o maior elemento do vetor
#include<stdio.h>
#include<stdlib.h>

int largestElement(int *vet, int len, int indice){
    
    if (len == 0)
        return vet[indice];
    else{    
        if(vet[len-1] > vet[indice]){
            return largestElement(vet, len-1, len-1);
        }
        else{
            return largestElement(vet, len-1, indice);
        }
    }
}

int main(){
    int vet[10] = {100321,3123,5123,4,2,91321,81231231,6,7,8};
    printf("%d\n", largestElement(vet, 10, 0));
}