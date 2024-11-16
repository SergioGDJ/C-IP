//file opening, file writing, file closing by functions and procedures.
#include <stdio.h>

void writing(char *f){ //f e o nome do arquivo
    FILE *file;
    file = fopen(f, "w");
    char a;

    if(file){
        printf("Digite um texto para salvar no arquivo:\n");
        scanf("%c", &a);
        while(a != '\n'){
            fputc(a, file); 
            scanf("%c", &a);
        }
        fclose(file);
    }
    else
        printf("\nERRO AO ABRIR O ARQUIVO\n");
}

void read(char *f){
    // como eu vou abrir o arquivo, eu nao preciso do rewind, pois o ponteiro ja vai apontar pro inicio
    // do arquivo
    FILE *file;
    file = fopen(f, "r");
    char letra;
    if(file){
        printf("\tTexto lido do arquivo\n");
        while(!(feof(file))){
            letra = fgetc(file);
            printf("%c", letra); 
        }
        fclose(file);
    }
    else
        printf("\nERRO AO ABRIR ARQUIVO\n");
}

int main(){
    char nome[] = {"conto3.txt"};
    writing(nome);
    read(nome);
    
    return 0;   
}