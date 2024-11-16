#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void alocarMatriz(int ***mat) {
    int i;
    *mat = malloc(6 * sizeof(int*)); 
    for(i = 0; i < 6; i++) {
        (*mat)[i] = malloc(6 * sizeof(int)); 
    }
}

void gravarMatriz(int **mat) {
    srand(time(NULL));
    int i, j;
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            mat[i][j] = rand() % 100;
        }
    }
}

void imprimirMatriz(int **mat) {
    int i, j;
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
}

int somaMaxima(int **mat) {
    int i, j;
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
    return soma_maxima;
}

int main() {
    int **matriz;
    alocarMatriz(&matriz); 
    gravarMatriz(matriz);
    imprimirMatriz(matriz);

    printf("Soma máxima das ampulhetas: %d\n", somaMaxima(matriz));   

    // Liberar a memória alocada para a matriz
    for (int i = 0; i < 6; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}
