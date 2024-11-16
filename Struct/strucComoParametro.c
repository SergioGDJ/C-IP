//Como criar um procedimento que recebe uma struct como parametro(Procedimento NAO tem retorno.)

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

//DatNas E uma struct dentro de outra.

void imprimirPessoa(Pessoa p){
    printf("\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nascimento: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano); 
}

int main(){
    Pessoa garoto;
    printf("Digite seu nome: ");
    fgets(garoto.nome, 100, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &garoto.idade);

    printf("Digite seu sexo: ");
    scanf(" %c", &garoto.sexo);

    printf("Digite sua data de nascimento no fomato dd mm aaaa");
    scanf("%d%d%d", &garoto.dataNas.dia, &garoto.dataNas.mes, &garoto.dataNas.ano);

    imprimirPessoa(garoto);
}