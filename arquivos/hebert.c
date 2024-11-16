#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file; 
    /*
    FILE e uma struct. cujos campos contem varias informacoes. dentre elas:
        Um ponteiro para o buffer que armazena os dados do fluxo.
        Tipo de operacao permitida no fluxo, exemplo: ler ou escrever. 
        Codigos de erro
        Ponteiros para as funcoes
        Um indicador da posicao atual no buffer
        etc...
    */
    file = fopen("/home/sergio/Personal/ teoria.txt", "w");

    char letra;

    /*
    cabecalho da funcao fgetc()
    int fgetc(FILE *file){...}

    cabecalho da funcao fputc()
    int fputc(char letra, FILE *file){...}
    
    */
    if(file==NULL)
        exit(1);
    
    //Escrevendo no meu arquivo:
    scanf("%c", &letra);
    while(letra != '\n'){
        fputc(letra, file);
        scanf("%c", &letra);
    }
    fclose(file);
}