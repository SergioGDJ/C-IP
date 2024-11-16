#include<stdio.h>
#include<stdlib.h>

void imprimir(int *vet, int len){
    if(len == 1)
        printf("%d", vet[len-1]);
    else{
        imprimir(vet, len-1);
        printf(", %d", vet[len-1]);
    }
}

void inverterVetor(int *v, int end, int start){
    int aux;
    if(start < (end-1)){
        aux = v[start];
        v[start] = v[end-1];
        v[end-1] = aux;
        inverterVetor(v, end-1, start+1);    
    }
}

int main(){
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    imprimir(vet, 10);
    inverterVetor(vet, 10, 0);
    printf("\n");
    imprimir(vet, 10);
}