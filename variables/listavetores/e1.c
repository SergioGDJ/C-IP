#include <stdio.h>
//criar uma matriz com n inteiros, n digitado pelo usuario
int main(){
    long int n;
    
    scanf("%ld", &n);  //li o tamanho do vetor

    long int vet[n]; //criei o vetor

    //gravar n valores inteiros no vetor, adquiridos pelo teclado
    int i;
    for(i=0; i<n; i++){
        scanf("%ld", &vet[i]);
    }
    
    for(i=0; i<n; i++){
        
        
    }
    
    //eftetuar j buscas no vetor
    int j, k;
    
    scanf("%d", &j);
    int buscas[j]; //vetor de buscas, com j elementos

    for(i=0; i<j; i++){
        
        scanf("%d", &buscas[i]);
    } //gravei j elementos digitados no teclado no vetor buscas[j];
    int achei;
    for(i=0; i<j; i++){
        achei = 0;
        for(k=0; k<n; k++){
            if(vet[k] == buscas[i])
                achei = 1;
        }
        if(achei==1)
            printf("ACHEI\n");
        else
            printf("NAO ACHEI\n");    
    }
}