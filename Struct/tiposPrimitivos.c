#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
existem tipos defaut de variaveis em C. O problema, e que isso acaba me limitando um pouco. Pense no seguinte exemplo: 
eu quero armazenar dados de 100 mil pessoas, os dados sao idadade, sexo e nome.

eu precisaria de 100 mil arrays, 100 mil valores int, 100 mil caracteres.

para facilitar isso, eu posso criar um novo tipo de variavel.
*/
/*
a criacao de dados, e como se fosse uma caixa. Nela eu coloco os tipos primitivos de dados que usarei. a "caixa" e o que 
esta entre os colchetes.
*/

typedef struct{
    int idade;
    char sexo;
    char nome[100];

}Pessoa; //nome do meu novo tipo de dado

int main(){
    Pessoa pessoa1; //criei uma variavel do tipo pessoa, e dei o nome. assim como int i, por exemplo.

    pessoa1.idade = 21;
    pessoa1.sexo = 'M';
    strcpy(pessoa1.nome, "Sergio");

    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);

    printf("Digite seu nome: ");
    fgets(pessoa1.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &pessoa1.idade);
    printf("Digite seu sexo, M ou F: ");
    scanf(" %c", &pessoa1.sexo);
    strcpy(pessoa1.nome, pessoa1.nome);
    printf("Nome: %s\nIdade: %d\nSexo: %c\n", pessoa1.nome, pessoa1.idade, pessoa1.sexo);


}