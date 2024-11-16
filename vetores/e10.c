//frequencia e maior
#include <stdio.h>
#include <stdlib.h>

int main(){
    int *notas, i, quantidade;
    scanf("%d", &quantidade);
    
    notas = malloc(quantidade * sizeof(int));

    for(i=0; i<quantidade; i++){
        scanf("%d", &notas[i]);
    }
    // printf("\n");
    // for(i=0; i<quantidade; i++)
    //     printf("%d ", notas[i]);

    int maior = notas[0], rep=0, indice_maior_nota, ultima_nota;

    for(i=0; i<quantidade; i++){
        if(notas[i] > maior){
            maior = notas[i];
            indice_maior_nota = i;}
    }

    ultima_nota = notas[quantidade-1];

    for(i = 0; i<quantidade; i++){
        if(notas[i] == ultima_nota){
            rep++;
        }
    }
    printf("Nota %d, %d vezes\nNota %d, indice %d\n", ultima_nota, rep, maior, indice_maior_nota);
}


















