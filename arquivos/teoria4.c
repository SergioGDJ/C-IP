#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// wirint a file from strings.
void wirite(char *f){
    FILE *file;
    char texto[500];
    file = fopen(f, "w+");
    printf("Digite uma frase ou um caractere para finalizar:\n");
    // fgets(texto, 500, stdin);
    scanf("%500[\n]", texto);
    // Esse scanf vai ler ate o enter, o enter vai permanecer no buffer do teclado. 
    getchar(); // vai consumir o enter
    while(strlen(texto)>1){
        fputs(texto, file);
        scanf("%500[\n]", texto);
        // getchar();
        fgets(texto, 500, stdin);
    }
    fclose(file);
}

void read(char *f){
    FILE *file;
    char letra;
    file = fopen(f, "r");
    while(!(feof(file))){
        letra = fgetc(file);
        printf("%c", letra);
    }
    fclose(file);
}

int main(){
    char nome[] = {"ola.txt"};
    // scanf("%s", nome);
    wirite(nome);

    // ta dando B.O
}