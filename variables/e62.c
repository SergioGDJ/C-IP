/*
10) Dadas duas matrizes A e B 3 x 3, faça um programa para calcular a soma das matrizes e salvar
em uma matriz C. Imprima as três matrizes.
*/
//Inclusao das bibliotecas.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int mat1[3][3], mat2[3][3], mat3[3][3], i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            mat1[i][j] = rand()%100;
            mat2[i][j] = rand()%100;  //escrevi nas matrizes 1 e 2.
            mat3[i][j] = mat1[i][j] + mat2[i][j]; //salvei a soma dos respectivos elementos das matrizes.
        }
    }
    printf("\nA primeira matriz e dada por: ");
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("%4d", mat1[i][j]);
        }
    }
        printf("\nA segunda matriz e dada por: ");
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("%4d", mat2[i][j]);
        }
    }
        printf("\nA matriz soma e dada por: ");
    for(i=0; i<3; i++){
        printf("\n");
        for(j=0; j<3; j++){
            printf("%4d", mat3[i][j]);
        }
    }
    printf("\n");
}