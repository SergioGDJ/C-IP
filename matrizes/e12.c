#include <stdio.h>
#include <stdlib.h>

void alocarMatrizInt(int ***mat, int tam){
    int i;
    *mat = malloc(tam * sizeof(int*));
    for(i=0; i<tam; i++)
        (*mat)[i] = malloc(tam * sizeof(int));
}

void alocarMatrizChar(char ***mat, int tam){
    int i;
    *mat = malloc(tam * sizeof(char*));
    for(i=0; i<tam; i++)
        (*mat)[i] = malloc(tam * sizeof(char));
}

void gravarMatriz(int **mat, int tam){
    int i, j;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void imprimirMatriz(int **mat, int tam){
    int i, j;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
}

void imprimirMatrizChar(char **mat, int tam){
    int i, j;
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            printf("%c", mat[i][j]);
        }
        printf("\n");
    }
}

void matrizResultante(int **mat1, char **matr, int **matquadrada, int tam){
    int i, j;
    for(i=0; i<(tam-1); i++){
        for(j=0; j<(tam-1); j++){
            matquadrada[i][j] = mat1[i][j] + mat1[i][j+1] + mat1[i+1][j] + mat1[i+1][j+1]; 
            if(matquadrada[i][j] >= 2){
                matr[i][j] = 'S';
            }
            else
                matr[i][j] = 'U';
        }
    }
}
int main(){
    int n, i;
    scanf("%d", &n);
    n++;
    int **mat1, **matq;
    char **matr;
    alocarMatrizInt(&mat1, n);
    alocarMatrizChar(&matr, n-1);
    alocarMatrizInt(&matq, n);
    gravarMatriz(mat1, n);
    // imprimirMatriz(mat1, n);
    matrizResultante(mat1, matr, matq, n);
    imprimirMatrizChar(matr, n-1);
    for(i=0; i<n; i++){
        free(mat1[i]);
    }
    for(i=0; i<n-1; i++){
        free(matr[i]);
    }      
    return 0;
}