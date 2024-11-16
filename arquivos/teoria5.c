#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void escrever(char f[]){
    FILE *file = fopen(f, "w");
    char texto[500];

    if(file){
        printf("Digite uma frase ou um caractere:\n");
        scanf("%500[\n]", texto);
        getchar();
        while(strlen(texto) > 1){
            fputs(texto, file);
            fputc('\n', file);
            scanf("%500[\n]", texto);
            getchar();
        }
        fclose(file);
    }
    else
        printf("\nErro ao abrir arquivo\n");
}

void ler(char f[]){
    FILE *file = fopen(f, "r");
    char texto[500];

    if(file){

        fclose(file);
    }
    else
        printf("\nErro ao abrir arquivo!\n");
}

int main(){
    char nome[] = {"contol.txt"};
    escrever(nome);
    ler(nome);
}