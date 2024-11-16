/*
calculo do imc
*/

#include <stdio.h>
int main(){
    float altura, peso, imc=0;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    printf("\nDigite seu peso: ");
    scanf("%f", &peso);
    imc = peso/(altura*altura);
    printf("\n\tSeu IMC e: %.2f\n\n", imc);
    
    switch (imc)
    {
    case imc < 18.5:
        printf("\nAbaixo do peso.\n");
        break;
    case 18.5 <= imc < 25:
        printf("\nPeso normal\n");
    case 25 <= imc < 30:
        printf("\nSobrepeso\n");


    default:
        break;
    }

}