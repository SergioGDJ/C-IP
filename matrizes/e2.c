#include <stdio.h>

int main(){
    int i, j, n;
    scanf("%d", &n);

    int mat[n][n];
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            if(i==j){
                printf("%d\n",mat[i][j]);
        }
    }
    
}
}