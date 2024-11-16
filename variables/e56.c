/*
4) Uma pequena loja de artesanato possui apenas um vendedor e comercializa 10 tipos de objetos
diferentes. O vendedor recebe um salário de R$1100,00 acrescido de 5% do valor total de suas
vendas. O valor unitário dos objetos deve ser informado e armazenado em um vetor; a quantidade
vendida de cada objeto deve ficar em outro vetor, mas na mesma posição. Crie um programa que
receba os preços e as quantidades vendidas, armazenando-os em seus respectivos vetores. Depois,
determine e mostre:
a) A quantidade vendida, valor unitário e valor total de cada objeto. Ao final, deverão ser mostrados
o valor total das vendas e o valor da comissão que será paga ao vendedor.
b) O valor do objeto mais vendido e sua posição no vetor (em caso de empates mostre todos
empatados).
*/
#include <stdio.h>
int main(){
    double valor[10];
    int i, quantvend[10];
    for(i=0; i<10; i++){
        printf("Digite o valor do %d ",i+1);
        scanf("%lf", &valor[i]);
        printf("Digite a quantidade vendida do %d ", i+1);
        scanf("%d",&quantvend[i]);
        
    }
    for(i=0; i<10; i++){
        printf("\nA quantidade vendida do objeto %2d e: %2d, o valor unitario e %.2lf R$, o valor da comissao e %.2lf R$\n", i+1, quantvend[i], valor[i], valor[i]*(double)quantvend[i]*0.05);
    }
    //O valor do objeto mais vendido e sua posicao no vetor
    int maior, posicao, n=0;
    maior = quantvend[0];
    for(i=0; i<10; i++){
        if(quantvend[i] > maior){
            maior = quantvend[i];
            posicao = i;
        }
        else if(quantvend[i] == maior)
            n++;
    }
    printf("O objeto mais vendido foi o %d, com %d vendas, existem %d objetos com o mesmo numero de vendas", posicao, maior, n);
}