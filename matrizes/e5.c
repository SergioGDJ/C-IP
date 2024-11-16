#include <stdio.h>

int main(){
    int i, j, m, n ;
    
    scanf("%d%d", &m, &n); //i linhas, j colunas
    int mat[m][n];


    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            if((i+j) % 2 == 0)
                mat[i][j] = 1;
            
            else
                mat[i][j] = 0;
        }
    }
    for(i=0; i<m; i++){
        
        for(j=0; j<n; j++){
            printf("%d", mat[i][j]);
        }
        printf("\n");
    }
}