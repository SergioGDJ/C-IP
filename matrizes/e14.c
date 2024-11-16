    #include <stdio.h>
    #include <stdlib.h>
    
    void alocarMatriz(int ***mat, int i, int j){
        *mat = malloc(i * sizeof(int *));
        int k;
        for(k=0; k<j; k++){
            (*mat)[k] = malloc(j * sizeof(int));
        }
    }
     
    void printarMatriz(int **mat, int i, int j){
        int k, l;
        for(k=0; k<i; k++){
            for(l=0; l<j; l++){
                printf("%3d", mat[k][l]);
            }
            printf("\n");
        }
    }
     
    void preencherMatriz(int **mat, int i, int j){
        int k, l;
        srand(time(NULL));
        for(k=0; k<i; k++){
            for(l=0; l<j; l++){
                scanf("%d", &mat[k][l]);
            }
        }
    }
     
    void menorMaior(int **mat, int m, int n, int *menor1, int *maior1){
        int i, j; 
        *maior1=mat[0][0];
        *menor1=mat[0][0];
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(mat[i][j] > *maior1){
                    *maior1 = mat[i][j];
                }
                if(*menor1 > mat[i][j]){
                    *menor1 = mat[i][j];
                }
            }
        }
    }
     
    void frequenciaMenorMaior(int **mat, int m, int n, int menor, int maior, float *frequencia_menor, float *frequencia_maior){
        int i, j;
        *frequencia_menor = 0;
        *frequencia_maior = 0;
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                if(mat[i][j] == maior){
                    (*frequencia_maior)++;
                }
                if(mat[i][j] == menor){
                    (*frequencia_menor)++;
                }
            }
        }
        *frequencia_menor = 100*(*frequencia_menor)/(m * n);
        *frequencia_maior = 100*(*frequencia_maior)/(m * n);
        printf("%d %.2f%%\n%d %.2f%%\n", menor,*frequencia_menor, maior, *frequencia_maior);
    }
     
    int main(){
        int i, j, **mat, menor, maior; float quant_menor, quant_maior;
        scanf("%d%d", &i, &j);
        alocarMatriz(&mat, i, j);
        preencherMatriz(mat, i, j);
        // printarMatriz(mat, i, j);
        menorMaior(mat, i, j, &menor, &maior);
        frequenciaMenorMaior(mat, i, j, menor, maior, &quant_menor, &quant_maior);
        free(mat);
    }