#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero = 25;
    //ao mesmo tempo que ela tem um conteudo, ela tem um endereco de memoria
    printf("%d\t%p\n", numero, &numero);

    //assim como existe variavel para armazenar inteiros, float, char, existe variavel para armazenar
    //enderecos de memoria. Essas sao chamadas de ponteiros.

    int *p = &numero;  //p sendo um ponteiro ele armazena um endereco de memoria. como ele aponta para um endereco de int, 
    //eu preciso fornecer um endereco de inteiro.

    printf("%p\n", p); //O conteudo do ponteiro, e a propria regiao de memoria que foi atribuida

    printf("%p\n", &p); //O endereco da variavel p e diferente de seu conteudo.

    printf("%d\n", *p);  //este asterisco indica que eu quero o conteudo que esta neste endereco de memoria que p armazena. 
}