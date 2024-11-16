//12) Faça um programa que imprima na tela a diagonal secundária de uma matriz 7 x 7.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int mat[7][7], i, j;

    srand(time(NULL));

    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            mat[i][j] = rand()%100;
        }
    }
    printf("\nMATRIZ:\n");
    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            printf("%3d",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n\nDiagonal secundaria\n");
    for(i=0; i<7; i++){
        for(j=0; j<7; j++){
            if(i + j == 6){
                printf("%3d", mat[i][j]);
            }
            else
                printf("   ");
        }
        printf("\n");
    }
}