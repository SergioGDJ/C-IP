#include <stdio.h>

int main() {
    int conta;
    double consumo, x;
    char tipo;
    scanf("%d%lf %c", &conta, &consumo, &tipo);

    if (tipo == 'r' || tipo == 'R')
        x = 5 + 0.05 * consumo;
    else if (tipo == 'c' || tipo == 'C') {
        if (consumo <= 80)
            x = 500;
        else
            x = 500 + 0.25 * (consumo-80);
    } else if (tipo == 'i' || tipo == 'I') {
        if (consumo <= 100)
            x = 800;
        else
            x = 800 + 0.04 * (consumo-100);
    }

    printf("\nCONTA %d\nVALOR DA CONTA = %.2lf", conta, x);

    return 0;
}
