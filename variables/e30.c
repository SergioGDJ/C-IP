/*
Fazer um algoritmo que calcule a média aritmética das três notas de um aluno e mostre, além do valor
da média, uma mensagem de "APROVADO", caso a média seja igual ou superior a seis, ou a mensagem
"REPROVADO", caso contrário.
*/
#include <stdio.h>
int main(){
    int  i=1, n;
    float nota, media;

    printf("\nDigite de quantas notas voce deseja calcular a media: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        printf("\nDigite a %d nota: ", i);
        scanf("%f",&nota);
        media += nota;

    }
    printf("\nMEDIA: %.2f\n", media/n);
    if((media/n)>=6)
        printf("\nAPROVADO\n");

    else
        printf("\nREPROVADO\n");
}