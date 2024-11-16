#include <stdio.h>
/*
4) Crie um programa que permita ao usuário escolher entre fazer a conversão de Real para Dólar ou
de Dólar para Real. Utilize como taxa de câmbio $1 igual a R$5.30.
*/
int main(){
    float valor;
    int opcao;
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\nDigite\n1: real/dolar\n2: dolar/real\n3: sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        {
        valor = valor/5.3;
        printf("\n\t%.2f$\n",valor);
        break;
        }
    
    case 2:
        {
        valor = valor*5.3;
        printf("\n\t%.2fR$\n",valor);
        break;
        }
    case 3:
        {
        printf("\n\tSAINDO...\n");
        }
        
    }        


}