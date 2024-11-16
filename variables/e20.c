/*
13) Faça um programa que peça ao usuário um número inteiro maior que 2 e diga se o número
informado é primo ou não.
*/
#include <stdio.h>
int main(){
    int num, i, k=0, t; 
    do{
        do{
        printf("\nDigite um numero maior que 1: ");
        scanf("%d",&num);
        }while(num < 2);

        for(i = 1; i <= num; i++){
            if(num%i == 0)
                k += 1;
        }
        if(k>2)
            printf("\nNUMERO NAO PRIMO\n");
        else
            printf("\nNUMERO PRIMO\n");
        printf("\n1 - DIGITAR OUTRO NUMERO\n2 - SAIR\n");
        scanf("%d",&t);
    }while(t != 2);
}
