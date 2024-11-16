/*
Quando eu alocar memoria para uma variavel, eu sou responsavel por desalocar aquela memoria, usando a funcao free
ou seja, quando eu nao precisar mais de uma memoria alocada para o vetor ou variavel, eu poso liberar novamente essa
memoria para poder utilizar no resto do programa
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
        printf("Digite o novo tamando do vetor: ");
        scanf("%d", &tam);

        vet = realloc(vet, tam); //recebe 2 parametros, o primeiro e o vetor que eu ja tenho, o segundo e o novo tamanho
        //preencher o vetor novamente
        for(i=0; i<tam; i++){
            *(vet+i) = rand()%100;
        }
        //printar o vetor
        for(i=0; i<tam; i++){
            printf("%d ", *(vet+i));
        }
        //a partir deste ponto, eu nao preciso mais desse vetor. posso desaloca-lo, portanto.
        free(vet);
    }
    else{
        printf("Erro ao alocar memoria");
    }
}

