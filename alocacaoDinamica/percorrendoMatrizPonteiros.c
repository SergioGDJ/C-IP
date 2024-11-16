//Como percorrer uma matriz sem usar o par de colchetes?
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/*
int *  --> 1 2 3
int *  --> 1 4 5 
int *  --> 3 1 4 
int *  --> 9 8 1
*/

int main(){
    srand(time(NULL));
    int **mat, i, j;
    //O primeiro passo, e alocar o na memoria do computador um espaco para a minha matriz de ponteiros mat.
    mat = malloc(4 * sizeof(int*)); //A funcao m alloc recebe como parametro o tamanho do que vai ser alocado
    //E importante observar que o sizeof(int*), o asterisco vem a direita, nao a esquerda

    //O proximo passo, e dentro do meu array de ponteiros, alocar memoria para o proximo array.

    for(i=0; i<4; i++){
        mat[i] = malloc(3 * sizeof(int));
    }
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
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            printf("%d ", &mat[i][j]);
        }
        printf("\n");
    }
}