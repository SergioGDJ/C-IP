#include <stdio.h>

int main(){
    int i, j, linha , coluna;
    scanf("%d%d", &linha, &coluna);

    for(i=1; i<=linha; i++){
        for(j=1; j<=coluna; j++){
            if(i > j){
                printf("(%d, %d)", i, j);
                if (j< coluna)
                    printf("-");

            }
        }
            if(i<linha)
                printf("\n");
    }


}
        