/*
9) Crie um programa que preencha uma matriz 5x10 com números inteiros. Em seguida faça:
a) some cada uma das linhas armazenando o resultado em um vetor;
b) some cada uma das colunas armazenando o resultado em um vetor;
c) Imprima os dois vetores identificando qual é a soma das linhas e qual é a soma das colunas.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int mat1[5][10], i, j, slinha[5], scol[10];
    srand(time(NULL));
    //preenchendo a matriz
    for(i=0; i<5; i++){
        //comeco preenchendo a linha 0
        //estrutura de repeticao para preencher as colunas da linha zero
        for(j=0; j<10; j++){
            mat1[i][j] = rand() %100;

        }
    }
    printf("A MATRIZ E:\n");
    for(i=0; i<5; i++){
        printf("\n");
        for(j=0; j<10; j++){
            printf("%3d",mat1[i][j] );
        }
    }
    //A) somar colunas => manter a coluna constante, e somar as colunas.
    for(j=0; j<10; j++){
        
        for(i=0; i<5; i++){
            scol[j] = mat1[i][j] + scol[j];
           
        }
    }
    printf("\nA soma das colunas e:\n");
    for(j = 0; j<10; j++){
        printf("%3d ",scol[j]);
    }
    //soma das linhas, armazenadas em um vetor.
    for(i=0; i<5; i++){
        for(j=0; j<10; j++){
            slinha[i] += mat1[i][j];
        }
    }
    printf("\nA soma das linhas e:\n");
    for(j = 0; j<5; j++){
        printf("%4d ",slinha[j]);
    }
}