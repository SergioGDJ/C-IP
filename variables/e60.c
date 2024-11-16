#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//8) Faça um programa que calcule e imprima a soma de todos os elementos de uma matriz 5 x 7.

int main(){
    int mat1[5][7], mat2[5][7], matsom[5][7], j, i;
    srand(time(NULL));
    for(i=0; i<5; i++){
        for(j=0; j<7; j++){
            mat1[i][j] = rand()%100;
            mat2[i][j] = rand()%100;
        }
    }
    printf("MATRIZ 1: ");
    for(i=0; i<5; i++){
        printf("\n");
        for(j=0; j<7; j++){
            printf("%3d", mat1[i][j]);
        }
    }
    printf("\nMATRIZ 2:");
    for(i=0; i<5; i++){
        printf("\n");
        for(j=0; j<7; j++){
            printf("%3d", mat2[i][j]);
        }
    }
    for(i=0; i<5; i++){
        for(j=0; j<7; j++){
            matsom[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    printf("\n");
        printf("\nMATRIZ SOMA:");
    for(i=0; i<5; i++){
        printf("\n");
        for(j=0; j<7; j++){
            printf("%4d", matsom[i][j]);
        }
    }printf("\n");
}