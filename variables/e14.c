/*
6) Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.
*/
#include <stdio.h>
int main(){
    int m, i=1;

    while(m+7 <=9999)
    {
       m += 7;
       
       printf("\n%d\n", m);
    }
    return 0;
}