/*
Escreva um algoritmo par ler um valor em reais e calcular qual o menor número possível de notas de $R
100, $R 50, $R 10 e moedas de $R 1 em que o valor lido pode ser decomposto. O programa deve escrever
a quantidade de cada nota e moeda a ser utilizada.
*/

#include <stdio.h>
int main(){
    int num, c, d , u, l;
    scanf("%d", &num);  

    c = num/100;
    l = (num%100)/50;
    d = ((num%100)%50)/10;
    u = num%10;
    printf("\n%d notas de 100$\n%d notas de 50$\n%d notas de 10$\n%d notas de 1$\n",c, l, d, u);
}
