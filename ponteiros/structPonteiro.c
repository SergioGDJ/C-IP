#include<stdio.h>
#include<stdlib.h>
//E possivel criar um ponteiro para struct?

//criando uma struct Data
typedef struct {
    int dia, mes, ano;
}Data; //Criei um novo tipo de variavel, com o nome Data. E um tipo de variavel, assim como int, char, float, ...

void imprimirData(Data *x){
    printf("%d/%d/%d", x->dia, x->mes, x->ano);   //SEMPRE que eu estiver manipulando um ponteiro para struct, ao inves de usar o ponto, eu devo usar '->'
}

int main(){
    Data data; //criei uma variavel do tipo Data com o nome data
    Data *p;

    p = &data;

    printf("data: %p\tp: %p\n\n", &data, p);

    data.dia = 4;
    data.mes = 6;
    data.ano = 2024;

}