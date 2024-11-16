/*
5) Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e
imprima a média semestral. Faça com que o programa só aceite notas válidas (uma nota válida deve
pertencer entre o intervalo de 0 a 10). Cada nota deve ser validada separadamente.
*/
#include <stdio.h>

int main(){
    float n1, n2, m;
    printf("Digite as notas do semestre: \n");
    scanf("%f%f", &n1,&n2);
    while (n1>10 || n1<0 || n2> 10 || n2<0)
    {
        printf("\nDigite valores validos entre 0 e 10:\n");
        scanf("%f%f",&n1,&n2);

    }
    m = (n1+n2)/2;
    printf("A media e: %.2f\n", m);
    return 0;

}