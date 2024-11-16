/*
Imagine que agora, diferente de antes, eu queira criar uma struct, e dentro de uma outra struct, usar a struct ja criada.
por exemplo: ao definir uma pessoa, alem de nome, idade e sexo, e necessario uma data de nascimento, por exemplo.
para definir a data de nascimento, eu poso usar uma outra struct que armazena este tipo de dado.
*/

#include <stdio.h>
#include <stdlib.h>
/*
Sobre struct: Criar um struct, torna o programa mais organizado. Eu crio uma variavel pessoa(struct) e coloco seus dados 
dentro de uma caixinha, representada por essa variavel. Os tipos primitivos de dados passam entao a ser usados para 
preencher dados pessoais daquela pessoa.
*/

/*
Eu criei um tipo de variavel, chamada DatNas, em que eu vou utilizar em outra struct, observe que isso e uma struct dentro
de outra struct.
*/
typedef struct{
    int dia, mes, ano;
}DatNas;

typedef struct{
    DatNas dataNas;
    int idade;
    char sexo;
    char nome[100];
}Pessoa;

int main(){
    //depois de fazer tudo, vamos a funcao main.
    Pessoa garoto;
    printf("Digite seu nome: ");
    fgets(garoto.nome, 100, stdin);

    printf("Digite a sua idade: ");
    scanf("%d", &garoto.idade);

    printf("Digite seu sexo: ");
    scanf("%c", &garoto.sexo);

    printf("Digite sua data de nascimento no formato dd/mm/aaaa: ");
    scanf("%d%d%d", &garoto.dataNas.dia, &garoto.dataNas.mes, &garoto.dataNas.ano);

    printf("Data de nascimento: %d/%d/%d", garoto.dataNas.dia, garoto.dataNas.mes, garoto.dataNas.ano);
    
}
/*
Com esse programa ,da para perceber o quao struct e util para o gerenciamento de informacoes na memoria do computador
*/