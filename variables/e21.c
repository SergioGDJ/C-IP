/*
14) Faça um programa que calcule a média de salários de uma empresa, pedindo ao usuário a
quantidade de funcionários e o salário de cada funcionário. Ao final, o programa deve imprimir a
média dos salários informados, o salário mais alto e o salário mais baixo.
*/

#include <stdio.h>

int main(){
    float salario,maior=0, menor=30000,  total;
    int i, people;
    printf("\nDigite a quantidade de pessoas na empresa: ");
    scanf("%d", &people);
    
    for(i=1; i<=people; i++){
        printf("\nDigite o salario do %d funcionario: ", i);
        scanf("%f", &salario);
        
        if(salario >= maior)
            maior = salario;
        if(menor >= salario)
            menor = salario;
        
        total = total + salario;
    }
    printf("\nA media salarial e %.2fR$\n", total/people);
    printf("\n\nMaior salario: %.2fR$\t Menor salario: %.2fR$\n",  maior, menor);

}