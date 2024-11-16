//programa para ordenar uma lista
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int vet[n], i;
    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    int copia, k=0;
    do{
        k = 0;
        for(i=0; i<n-1; i++){
            if(vet[i] > vet[i+1]){
                copia = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = copia;
                k=1;
            }
        }
    }while(k);
    for(i=0; i<n; i++){
        printf("%d\n", vet[i]);
    }

}