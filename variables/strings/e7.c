//procura por caractere
#include <stdio.h>
#include <stdlib.h>

int procuraCaractere(char a, char b[300]){
    scanf(" %c", &a);
    int i;
    for(i=0; i<300; i++){
        if(b[i] == 'a'){
            printf("Caractere %c encontrado no indice %d da string.", a, i);
        }
    }
}

int main(){
    int n;
    scanf("%d", &n); //quantidade de casos de teste.
    for(int i=0; i<n; i++){
        char palavra[300], x;
        procuraCaractere(x, palavra);
    }
}