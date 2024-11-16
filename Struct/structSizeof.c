//Qual e o tamanho de um struct?
#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int dia, mes, ano;
}DatNas;

typedef struct{
    DatNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

//pegando a struct passada como exemplo

int main(){
    Pessoa sergio;
    DatNas data;
    printf("%ld", sizeof(data));
    //Caso eu execute esse programa, irei ver que minha variavel do tipo Pessoa que eu criei, ocupa 120 Bytes de memoria.
    //Os meus tipos primitivos, ocupariam 117 bytes. a variavel Pessoa ocupa 120. Esses 3 bytes e o tanto de memorai que o 
    //computador usa pra gerenciar esses dados.
    //Caso eu retirasse o struct da variavel Pessoa, esses 3 bytes nao seriam necessarios. Isso ocorre por que o computa
    //dor gerencia isso como um vetor na memoria.

    /*
    tipos iguais: sem bytes adicionais

    tipos diferentes: 3 bytes a mais
    */     
}