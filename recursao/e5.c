#include<stdio.h>
#include<stdlib.h>

int somarVetor(int vet[], int tam){
    if(tam==1){
        return vet[0];
    }
    else{
        return vet[tam-1] + somarVetor(vet, tam-1);
    }
}

int main(){
    int n;
    scanf("%d", &n);
    while(n--){
        int vet[30];
        int tam, i;
        scanf("%d", &tam);
        for(i=0; i<tam; i++){
            scanf("%d", &vet[i]);
        }
        printf("%d\n", somarVetor(vet, tam));
    }
}