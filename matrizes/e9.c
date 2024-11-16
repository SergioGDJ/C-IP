//Matriz xadrez enumerada
#include <stdio.h>
#include <stdlib.h>

void imprimirMatrizXadrez(int x, int y){
    int **mat;
    mat = malloc(x * sizeof(int*));
    int i, j;
    for(i=0; i<x; i++){
        *(mat + i) = malloc(y * sizeof(int));
    }
    int count = 1;
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            if((i + j) % 2 == 0){
                *(*(mat + i) + j) = 0;
            }
            else{
                *(*(mat + i) + j) = count;
                count++;
            }
        }
    }
    for(i=0; i<x; i++){
        for(j=0; j<y; j++){
            printf("%d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}

int main(){
    int i, j;
    scanf("%d%d", &i, &j);
    imprimirMatrizXadrez(i, j);
}