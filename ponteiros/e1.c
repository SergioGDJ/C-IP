#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void imprimir(vet[10]){
    for(int i = 0; i< 10 ; i++)
        printf("%d ", vet[i]);
}

int main(){
    int vet[10], i, maior, menor, copia; 
    srand(time(NULL));

    for(i=0; i<10; i++){
        vet[i] = rand();
    }
    int cont = 0;
    do{
        for(i=0; i<10; i++){
        cont = 0;
        if(vet[i] > vet[i+1]){
            copia = vet[i];
            vet[i] = vet[i+1];
            vet[i+1] = vet[i];
            cont = 1;
            }
        }
    }while(cont != 0);

    imprimir(vet);

}