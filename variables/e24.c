/*
16) Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
números inteiros entre 1 e 10.
*/

#include <stdio.h>
int main(){
    //fazer uma estrutura para testar se um numero x e divisivel por 1 ou 2 ou ... ou 10
    int x=10, i, divisores=0;
    while(divisores != 10){
        x++;
        divisores = 0;
        for(i=1; i<=10; i++){
            if(x%i==0)
                divisores++;
            }
        
    }    
    printf("\nO numero e %d\n",x);
}