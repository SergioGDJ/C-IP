/*
Como alocar memoria para um vetor de forma dinamica?

motivacao:
 
A alocação estática de memória ocorre durante a compilaçãodo programa. O espaço de memória é alocado e reservado para
variáveis e estruturas de dados antes do programa ser executado. Essa alocação é fixa e não pode ser modificada durante a 
execução do programa. É comum em linguagens como C e C++, onde as variáveis são declaradas em tempo de compilação e sua 
memória é alocada durante a fase de compilação.
-> ou seja, estaticamente memoria alocada na compilacao
-> dinamicamente, memoria alocada na execucao do programa, permitindo que eu use toda a memoria disponivel do sistema.

ate agora, para criar um vetor, o maximo que eu fazia era o seguinte
int tam;
int vet[tam];

*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int tam, *vet, i;
    printf("Digite o tamando do vetor: ");
    scanf("%d", &tam);

    vet = malloc(tam * sizeof(int));
    

    if(vet){
        for(i=0; i<tam; i++){
            *(vet+i) = rand()%100;
        }
        for(i=0; i<tam; i++){
            printf("%d ", *(vet+i));
        }
    }
    else{
        printf("Erro ao alocar memoria");
    }
}



















