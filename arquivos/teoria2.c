#include<stdio.h>
#include<stdlib.h>

// Modos de abertura de arquivos
//     w - escrita
//     r - leitura
//     a - anexar
//     w+ - leitura e escrita(Apaga o conteudo que existe)
//     r+ - leitura e escrita
//     a+ - leitura e escrita(adiciona ao final do arquivo)

// Diferente do programa passado, nesse eu quero ler e escrever o conteudo lido na tela, entao, nao vou usar o "w" e sim o 
// "w+".
int main(){
    FILE *file;
    char letra;
    //abrir o arquivo:
    /*
    1) Observacao extremamente importante: toda vez que eu escaneio a letra, o conteudo do meu ponteiro vai sofrendo 
    alteracoes. Isso por que ele sempre aponta para o final do arquivo, para que eu possa escrever la. 
    */
    file = fopen("conto2.txt", "w+");
    if(file){
        printf("Digite o texto a ser impresso no arquivo: ");
        scanf("%c", &letra);
        while(letra != '\n'){
            fputc(letra, file);
            scanf("%c", &letra);
        }
        // como o file aponta para o final do arquivo, caso eu queira ler o que tem la, vou ter que mudar pra onde meu
        // ponteiro file aponta
        
        rewind(file);
        //essa funcao faz com que o meu ponteiro file volte para o inicio do meu arquivo
        
        printf("\nTexto lido do arquivo:\n");
        while(!(feof(file))){
            // A funcao feof() - > f end of file, recebe como parametro o arquivo, e retorna verdadeiro quando chega
            // la. portanto, eu preciso nega-la, para que o meu loop pare no eof.
            letra = fgetc(file); 
            // A funcao fgetc() recebe um ponteiro, e retorna o caractere para o qual aquele ponteiro esta apontando
            printf("%c", letra);
        }
        //E necessario fechar o arquivo
        fclose(file);
    }
}