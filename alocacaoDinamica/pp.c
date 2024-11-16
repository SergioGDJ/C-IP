#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));
    int **mat, i, j;
    
    mat = malloc(4 * sizeof(int*)); 
    
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
            printf("%p ", &mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0; i<4; i++){
        printf("%p ", &(mat[i]));
    }
    printf("\n\n");

    printf("%p\t%p\t%d", &mat, mat, **mat);

    return 0;
}

