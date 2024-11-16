#include <stdio.h>
#include <stdlib.h>
//1) Ler n numeros, com n sendo ate 100.000(long int)
//2) Contar quantos sao pares e quantos sao impares
//3) Salvar os pares em uma lista, os impares em outra
//4) Ordenar a lista dos pares 
//5) Ordenar a lista dos impares
//6) Imprimir a lista dos pares e dos impares, sendo a dos impares invertida, 'ordenamento reverso'
int main(){
    long int n;
    scanf("%ld", &n);

    int vet[n], i; //criacao do vetor com tamanho n(indice de 0 ate n-1)
    for(i=0; i<n; i++){
        scanf("%d", &vet[i]);
    }

    int p=0,ip=0;
    for(i=0; i<n; i++){
        if((vet[i]%2) == 0)
            p++;
        else    
            ip++; //contei quantos elementos sao pares e quantos sao impares
    }
    
    int par[p], impar[ip], j=0;

    for(i=0; i<p; i++){
        while(1){
            if(vet[j]%2 == 0){
                par[i] = vet[j];
                j++;
                break;
            }
            j++;
                    
        }
        }
    j = 0;
    for(i=0; i<ip; i++){
        while(1){
            if(vet[j]%2 != 0){
                impar[i] = vet[j];
                j++;
                break;
            }
            j++;
                    
        }
    }
    
    //algoritmo para ordenar os vetores;
    int copia, count=0;
    do{
        count = 0;
        for(i=0; i<p-1; i++){
            
            if(par[i]>par[i+1]){
                copia = par[i];
                par[i] = par[i+1];
                par[i+1] = copia;
                count = 1;
            }
        }
    }while(count != 0);

    do{
        count = 0;
        for(i=0; i<ip-1; i++){
            
            if(impar[i]>impar[i+1]){
                copia = impar[i];
                impar[i] = impar[i+1];
                impar[i+1] = copia;
                count = 1;
            }
        }
    }while(count != 0);

    for(i=0; i<p; i++){
        printf("%d\n",par[i]);
    }
    
    for(i=ip-1; i>=0; i--){
        printf("%d\n",impar[i]);
    }
}
