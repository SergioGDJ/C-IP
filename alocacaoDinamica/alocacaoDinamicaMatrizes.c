/*
um vetor, em que cada elemento aponta pra outro vetor, e um ponteiro de ponteiros, certo?
entao, o vetor int vet = {*a, *b, *c, *d}, e um vetor, e neste vetor, cada elemento e um vetor, ou seja, uma matriz
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*

int *  ---> 10, 24, 1 
int *  ---> 11,  1, 3
int *  --->  2,  4, 1 
int *  ---> 11, 30, 25

eu tenho uma coluna, que e formada por inteiros do tipo ponteiro, em que cada elemento dessa coluna, armazena um array
*/
int main(){
    int **mat, i, j;
    
    //fazendo a alocacao
    //Para a alocacao da matriz, basta usar o mat, o mate um ponteiro que dentro das regioes de memoria tera os proximos 
    //ponteiros
    mat = malloc(4 * sizeof(int*)); //eu aloquei o espaco para 4 ponteiros, ou seja, uma matriz com 4 colunas, sendo cada
    //linha, um ponteiro

    for(i=0; i < 4; i++){ //4 linhas na minha coluna
        *(mat+i) = malloc(3 * sizeof(int)); //em cada linha da minha coluna de ponteiros, quero armazenar 3 elementos
    }  

    //inicializar a matriz
    srand(time(NULL));

    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            mat[i][j] = rand()%100;
        }
    }
    
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            printf("%3d ", mat[i][j]);
        }
        printf("\n");
    }
    

}