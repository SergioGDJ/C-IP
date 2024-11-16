/*
13) Faça um programa para calcular a transposta de uma matriz 5 x 4. Imprima as duas matrizes na
tela.
*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    int i, j, mat[5][4];
    srand(time(NULL));
    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            mat[i][j] = rand()%100;
        } 
    }//Leitura da matriz;
    printf("A matriz e dada por\n");
    for(i=0; i<5; i++){
        for(j=0; j<4; j++){
            printf("%3d",mat[i][j]);
        }
        printf("\n");
    }
    printf("\nA transposta e:\n");
    for(i=0; i<4; i++){
        for(j=0; j<5; j++){
            printf("%3d",mat[j][i]);
        }
        printf("\n");
    }


}