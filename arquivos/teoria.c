/*
Todas as funcoes que eu preciso para mexer em arquivos, se encontram no cabecalho stdio.h, portanto, nao sera necessario 
adicionar nenhuma outra biblioteca.

Modos de abertura de arquivos
    w - escrita
    r - leitura
    a - anexar
    w+ - leitura e escrita(Apaga o conteudo que existe)
    r+ - leitura e escrita
    a+ - leitura e escrita(adiciona ao final do arquivo)

A primeira coisa que eu preciso fazer e criar um ponteiro para um arquivo.
O tipo, como int, float, double, e o tipo FILE
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *file;
    char letra;
    //Ate agora, eu criei uma variavel do tipo ponteiro que vai apontar pra um arquivo, mas eu ainda nao criei o arquivo 
    //propriamente.
    file = fopen("/home/sergio/projects_c/arquivos/conto.txt", "w");
    /*com essa funcao, fopen(), eu criei meu arquivo de nome conto.txt, no modo w, que e o de escrita. a funcao recebe 2 
    parametros, portanto. agora, eu preciso verificar se o arquivo foi criado com sucesso. se nao foi, o ponteiro retorna NULL*/
    if (file){
        printf("Digite um texto e pressione enter ao finalizar!\n");
        scanf("%c", &letra); //le o primeiro caractere da string
        while(letra != '\n'){
            fputc(letra, file);  //bota o caractere no arquivo
            scanf("%c", &letra); //vai ler a proxima letra
        }
        fclose(file);
        //Apos criar e abrir o arquivo, eu preciso fecha-lo.
    }
    else
        printf("\nERRO AO ABRIR O ARQUIVO");
}