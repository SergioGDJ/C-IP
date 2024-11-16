#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int i, j, **mat;
    mat = malloc(6 * sizeof(int*));
    
    for(i=0; i<6; i++){
        *(mat + i) = malloc(6 * sizeof(int)); 
    }
    for(i=0; i<6; i++){
        for(j=0; j<6; j++){
            scanf("%d", &*(*(mat + i) + j));
        }
    }

    // for(i=0; i<6; i++){
    //     for(j=0; j<6; j++){
    //         printf("%3d", *(*(mat + i) + j)); 
    //     }
    //     printf("\n");
    //}
    int soma_maxima = -9999;
    for(i=0; i<4; i++){
        for(j=0; j<4; j++){
            int soma = mat[i][j] + mat[i][j+1] + mat[i][j+2] + mat[i+1][j+1] + mat[i+2][j] + mat[i+2][j+1] + mat[i+2][j+2];
                if(soma > soma_maxima)
                    soma_maxima = soma;
        }
    }
    printf("%d\n", soma_maxima);

    for (i = 0; i < 6; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}