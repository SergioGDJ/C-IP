#include <stdio.h>

// Função para calcular a soma dos divisores de um número
int somaDivisores(int num) {
    int soma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    return soma;
}

// Função para verificar se dois números são amigos
int saoAmigos(int num1, int num2) {
    return (somaDivisores(num1) == num2 && somaDivisores(num2) == num1);
}

int main() {
    int n;
    printf("Digite a quantidade de números amigos que deseja encontrar: ");
    scanf("%d", &n);

    int encontrados = 0;
    int num = 1;
    
    while (encontrados < n) {
        int soma = somaDivisores(num);
        if (soma > num && saoAmigos(num, soma)) {
            printf("(%d,%d)\n", num, soma);
            encontrados++;
        }
        num++;
    }

    return 0;
}
   
