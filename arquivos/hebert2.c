#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *file;
    file = fopen("/home/sergio/Personal/projects_c/arquivos/teoria.txt", "w+");
    char letra;
    if(file==NULL)
        exit(1);
    letra = getchar();
    while(letra != '\n'){
        fputc(letra, file);
        letra = getchar();
    }
    //Escrevi no meu arquivo
    //LENDO O ARQUIVO
    printf("Texto lido do arquivo\n");
    rewind(file);
    while((letra = fgetc(file)) != EOF){
        // letra = fgetc(file);
        printf("%c", letra);
    }

    fclose(file);
}