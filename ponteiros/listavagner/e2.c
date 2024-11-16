//trocar o conteudo de duas variaveis atravez de ponteiros
#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b){
    printf("\n\nNo inicio: %.2f\t%.2f\n", *a, *b);
    float copia;
    copia = *a;
    *a = *b;
    *b = copia;
    printf("No fim: %.2f\t%.2f\n", *a, *b);
}

int main(){
    float valor1, valor2;
    scanf("%f%f", &valor1, &valor2);

    troca(&valor1, &valor2);
    printf("%.2f\t%.2f", valor1, valor2);
}