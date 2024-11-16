//Todas as funcoes para alocacao dinamica estao na biblioteca stdlib.h
#include<stdio.h>
#include<stdlib.h>
/*
m/alloc -> memory allocation, alocacao de memoria
essa funcao retorna um ponteiro para a regiao de memoria alocada, ou NULL

*/
int main(){
    int *x;

    x = malloc(sizeof(int)); 
    //a funcao m alloc precisa receber como parametro o tamanho que ela ira alocar. 
    //seu retorno e um ponteiro, que aponta para o primeiro byte da alocacao

    //da para fazer um teste para verificar se a memoria foi alocada corretamente

    if(x){
        printf("Memoria alocada com sucesso");
        printf("\nx: %d\n", *x); //ainda nao houve atribuicao a x, portanto e muito provavel que haja lixo de memoria
        *x = 50;
        printf("x: %d\n", *x);
    }
    else{
        printf("Erro na alocacao da memoria");
    }
       

}