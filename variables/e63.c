/*
11) Faça um programa que imprima na tela a diagonal principal de uma matriz 5 x 5.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int i, j ,mat[5][5], lista[5];
    srand(time(NULL)); //colocar na seed da funcao ran() a hora do computador.

    //gravar na matriz mat[5][5] os valores aleatorios da funcao rand()
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            mat[i][j] = rand()%100;
            if(i == j){
                lista[i] = mat[i][j];
            }
        }
    }
    printf("\nA matriz e dada por: ");
    for(i=0; i<5; i++){
        printf("\n");
        for(j=0; j<5; j++){
            
            printf("%3d", mat[i][j]);
        }
    }

    printf("\nA diagonal principal e:\n");
    for(i=0; i<5; i++){
        printf("%3d",lista[i]);
    }
}