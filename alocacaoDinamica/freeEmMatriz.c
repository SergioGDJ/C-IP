#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int **mat, i, j;
    mat = malloc(sizeof(4 * int*));
    *mat = malloc(3 * sizeof(int));
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            mat[i][j] = rand()%100;
        }
    }
    for(i=0; i<4; i++){
        for(j=0; j<3; j++){
            printf("%3d ", mat[i][j]);
        }
    }

}