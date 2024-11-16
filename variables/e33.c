/*QUESTAO 1 HEBERT*/    

#include <stdio.h>
int main(){
    int num, ntestes, i;            //quantidade de pessoas que compraram ingressos
    double pp,       //PORCENTAGEM de pessoas ing popular
           pg,       // ``         ``    ``    `` geral
           pa,       // ``           ``  ``    `` arquibancada
           pc,        // ``           ``  ```    ``cadeira
           renda;
     

    printf("Digite a quantidade de testes a serem feitos: ");
    scanf("%d", &ntestes);
    for(i = 1; i <= ntestes; i++){
        scanf("%d%lf%lf%lf%lf", &num, &pp, &pg, &pa, &pc);
        renda = (num * pp *1) + (num*pg*5) + (num*pa*10) + (num*pc*20);  
        printf("\n\na renda do jogo %d e: %.2lf R$\n\n", i, renda/100);

    }
    
}
    