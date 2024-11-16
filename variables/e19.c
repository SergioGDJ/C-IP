/*
11) Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a
massa inicial, em gramas, faça um programa que determine o tempo necessário para que essa massa
se torne menor que 0,05 gramas.
*/
#include <stdio.h>

int main(){
    float m;
    int i=0, t=0;
    printf("\nDigite a massa inicial da amostra, em gramas\n");
    scanf("%f",&m);
    
    while(m>=0.05){
        m = m/2;
        t = t+50;
    }
    printf("\n\n\t%ds\n\n",t);

}