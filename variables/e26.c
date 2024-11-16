/*
17) Faça um programa que peça números ao usuário. Quando o usuário digitar o número 0 (zero) o
programa deve imprimir na tela quantos números positivos e negativos foram digitados.
Exemplo:
*/

#include <stdio.h>
int main(){
    int p=0, n=0, num=2;
    while(num!=0){
        printf("\nDigite um valor: ");
        scanf("%d", &num);
        if(num>0)
            p++;
        else
            n++;
    }
    printf("\nPositivos: %d\nNegativos: %d\n",p,n-1);
    
}