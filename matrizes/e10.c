#include <stdio.h>
#include <stdlib.h>

void alocarMatriz(int ***mat, int n){
    *mat = malloc(n * sizeof(int *));
    int i;
    for(i=0; i<n; i++){
        (*mat)[i] = malloc(n * sizeof(int));
    }
}

void imprimirMatriz(int **mat, int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    
}

void gravarMatriz(int **mat, int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void matrizTransposta(int **mat, int **transposta, int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            transposta[i][j] = mat[j][i];
        }
    }
}

void traco(int **mat, int n, int *soma){
    int i, j;
    *soma = 0;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                *soma += mat[i][j];
            }
        }
    }
}

void calculofinal(int **trans, int **mat, int **resultado, int traco, int n){
    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            resultado[i][j] = (mat[i][j] * traco) + trans[i][j];
        }
    }
}

int main(){
    int n, **mat, **trans, tracomat, **resultado;
    scanf("%d", &n);
    alocarMatriz(&mat, n);
    alocarMatriz(&trans, n);
    alocarMatriz(&resultado, n);
    gravarMatriz(mat, n);
    // imprimirMatriz(mat, n);
    matrizTransposta(mat, trans, n);
    // imprimirMatriz(trans, n);
    traco(mat, n, &tracomat);
    calculofinal(trans, mat, resultado, tracomat, n);
    imprimirMatriz(resultado, n);
}