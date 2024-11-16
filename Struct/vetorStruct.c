//Uma vez que eu tenho um tipo, por exemplo, pessoa, eu posso criar um vetor de tipos, para armazernar as pessaos de uma sala de aula, por exemplo.
//tornando assim, mais organizado o meu programa. Isso seria um array de struct. 

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

//Funcao que le os dados de uma pessoa e retorna para quem chamou
Pessoa obterPessoa(){
    Pessoa garoto;
    printf("Digite seu nome: ");
    fgets(garoto.nome, 100, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &garoto.idade);

    printf("Digite seu sexo: ");
    scanf(" %c", &garoto.sexo);

    printf("Digite sua data de nascimento no fomato dd mm aaaa: ");
    scanf("%d%d%d", &garoto.dataNas.dia, &garoto.dataNas.mes, &garoto.dataNas.ano);
    getchar();

    return garoto;
}
//Procedimento para imprimir pessoa
void imprimirPessoa(Pessoa p){
    printf("\tNome: %s", p.nome);
    printf("\tIdade: %d\n", p.idade);
    printf("\tSexo: %c\n", p.sexo);
    printf("\tData de nascimento: %d/%d/%d\n", p.dataNas.dia, p.dataNas.mes, p.dataNas.ano); 
}

int main(){
    Pessoa pessoas[3]; //criei um vetor de struct, uma struct chamada pessoas.
    int i;
    for(i=0; i<3; i++){
    pessoas[i] = obterPessoa();
    imprimirPessoa(pessoas[i]);
    }
}