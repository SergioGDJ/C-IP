/*
Você decidiu ficar rico guardando dinheiro por 30 dias consecutivos. Para tal, decidiu guardar 1
centavo no primeiro dia, 2 centavos no segundo dia, 4 centavos no terceiro dia, 8 centavos no quarto
dia, e assim por diante. Faça um programa para calcular quanto você terá ao final dos 30 dias.
*/
#include <stdio.h>
int main(){
    float inicio, sum=0;
    int k=1, t;
    printf("\nQuantidade inicial: ");
    scanf("%f",&inicio);
    printf("\nQuantidade de dias: ");
    scanf("%d",&t);

    while (k <= t) {
        
        k += 1;
        inicio = inicio * 2;
        sum = inicio + sum;
    }
    printf("%.2f", sum);
    return 0;


}

