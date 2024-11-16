#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int n;
    scanf("%d", &n);//tamanho do vetor

    int vet[n], i;
    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }
    for(i=0; i<n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
    for(i=n-1; i>=0; i--){
        printf("%d ", vet[i]);
    }
    printf("\n");

    int maior=vet[0], menor = vet[0];
    for(i=0; i<n; i++){
        if(vet[i]>maior)
            maior= vet[i];
    }
    for(i=0; i<n; i++){
        if(vet[i]<menor)
            menor= vet[i];
    }
    printf("%d\n%d\n",maior, menor);
}