//como passar um ponteiro como parametro para uma funcao?

#include<stdio.h>
#include<stdlib.h>
/*
void imprimir(int num){
    printf("%d\n", num);
}

int main(){
    int idade = 35;
    imprimir(idade); 
    //quando eu faco isso, eu estou mandando apenas o valor da variavel idade para a funcao e mandando ela imprimir este valor. Eu nao estou passando a 
    //propria variavel idade.

    //Uma outra forma, seria ao inves de passar o valor da variavel, passar seu endereco.
}

*/

void imprimir(int *num){
    printf("%d\n", *num);
}

int main(){
    int idade = 35;
    imprimir(&idade);
}