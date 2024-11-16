#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main() {
    long int a = 1002190343123; 
    char caracteres[20]; // Tamanho 11 para o número e o caractere nulo
    int i;
    for(i=0; i<20; i++)
        caracteres[i] = '\0';
    sprintf(caracteres, "%ld", a);
    i=0;
    while(caracteres[i] != '\0'){
        printf("%c ", caracteres[i]);
        i++;
    }
    return 0;
}