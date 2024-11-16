//Criando a minha strcpy
#include <stdio.h>
#include <stdlib.h>

int minhastrcpy(char *destino, char *origem){
    int i=0;
    while(*(origem + i) != '\0'){
        *(destino + i) = *(origem + i);
        i++;    
    } //quando o teste for falso, while nao vai ser executado, portanto, o caractere de fim de string nao vai ser posto
    *(destino + i) = '\0';
    return i;
}

int main(){
    char destino[50], origem[50] = {"Bom dia, simpatia!"};
    printf("Tamanho: %d\n", minhastrcpy(destino, origem));
    printf("Destino: %s\n", destino);
}