//A funcao realloc serve para mudar o tamanho do vetor alocado na alocacao dinamica 
/*
Uma vez criado um vetor com tamanho 10, ele permanecera com esse tamanho ate o fim da execucao do programa. E uma estrutura 
chamada estatica. Com a funcao realloc, eu posso variar o tamanho do vetor ao longo da execucao do meu programa.
isso e feito da seguinte forma: a funcao aloca uma nova regiao de memoria, e separa x bytes a partir da regiao alocada
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
    }
    else{
        printf("Erro ao alocar memoria");
    }
}

