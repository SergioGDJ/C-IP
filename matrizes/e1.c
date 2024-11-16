//calculo de determinante
#include <stdio.h>

int main(){
    float mat[2][2];
    int i, j; //declaracao da matriz e dos contadores, que se referem ao seus indicies
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            scanf("%f", &mat[i][j]);
        }
    }
    float b;
    b = (mat[0][0]*mat[1][1]) - (mat[0][1] * mat[1][0]);
    printf("%.2f", b);
}