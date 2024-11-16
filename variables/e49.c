//imprimir os elementos abaixo da diagonal principal da matriz MxN

#include <stdio.h>
int main(){
    int i, j, linha, coluna;
    scanf("%d%d",&linha, &coluna);

    for(i=1; i<= linha; i++){
        for(j=1; j<i; j++){
            printf("(%d, %d)",i,j);
        }
        printf("\n");
    }
}

/*
a11 a12 a13 a14

a21 a22 a23 a24

a31 a32 a33 a34
*/