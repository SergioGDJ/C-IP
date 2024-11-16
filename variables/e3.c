/*
3) Escreva um programa em C que leia um número e informe se ele é divisível por 2, por 3 ou por
5, ou se não é divisível por nenhum deles.
*/

#include <stdio.h>

int main(){
    printf("\nDigite um numero:\t");
    int num;
    scanf("%d", &num);

    if (num%2 ==0)
        printf("O numero e divisivel por 2!");
            if (num%3 == 0)
                printf("O numero e divisivel por 3!");
                if (num%5==0)
                    printf("O numero e divisivel por 5!");
    else if (num %3 == 0)
        printf("O numero e divisivel por 3!");
            if (num%5 == 0)
                printf("O numero e divisivel por 5!");
    else if (num % 5 == 0)
        printf("O numero e divisivel por 5!");
        if(num%2 == 0)
            printf("O numero e divisivel por 2!");
    else
        printf("O numero nao e divisivel por 2, 3 ou 5")  ;

        return 0;  
}