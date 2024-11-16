/*
16) Faça um programa para encontrar o menor número inteiro que seja divisível por todos os
números inteiros entre 1 e 10
*/
#include <stdio.h>
int main(){
    int x=1;

    while(x%2!=0 || x%3!= 0 || x%4!= 0 || x%5!=0 || x%6!= 0 || x%7!=0 || x%8!= 0 || x%9!=0 || x%10!= 0){
        x+=1;
    }
    printf("\n%d\n",x);
}