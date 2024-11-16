#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int **mat, i, j;
    srand(time(NULL));
    mat = malloc(6 * sizeof(int*)); //Alocacao da memoria para o vetor que contem os ponteiros para os vetores fins

    for(i=0; i<6; i++){
        mat[i] = malloc(6 * sizeof(int)); //O elemento da matriz na posicao i, que e um ponteiro, foi alocado
    }

    for(i=0; i< 6; i++){
        for(j=0; j<6; j++){
            scanf("%d", &(*(*(mat + i) + j)));
        }
    }
    printf("\nMatriz dada por:\n");
    for(i=0; i< 6; i++){
        for(j=0; j<6; j++){
            printf("%3d", *(*(mat + i) + j));
        }
        printf("\n");
    }
    int soma_maxima = 0;
     for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            int soma_ampulheta = mat[i][j] + mat[i][j + 1] + mat[i][j + 2] +
                                            mat[i + 1][j + 1] +
                                 mat[i + 2][j] + mat[i + 2][j + 1] + mat[i + 2][j + 2];
            if (soma_ampulheta > soma_maxima) {
                soma_maxima = soma_ampulheta;
            }
        }
    }
    printf("Soma máxima das ampulhetas: %d\n", soma_maxima);
}