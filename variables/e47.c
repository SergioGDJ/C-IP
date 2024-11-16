#include <stdio.h>

int main(){
    int i=1, j=1, linha, coluna;
    scanf("%d%d", &linha, &coluna);

 for (int i = 2; i <= linha; i++) {
        for (int j = 1; j < i; j++) {
            printf("(%d, %d) ", i, j); 
        }
        printf("\n");

}
}